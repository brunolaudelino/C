#include <iostream>
#include <vector>

class Conta {
private:
    std::string tipo;
    double saldo;

public:
    Conta(const std::string& tipo, double saldoInicial) : tipo(tipo), saldo(saldoInicial) {}

    std::string getTipo() const {
        return tipo;
    }

    double getSaldo() const {
        return saldo;
    }

    void depositar(double valor) {
        saldo += valor;
        std::cout << "Dep�sito de " << valor << " realizado na conta " << tipo << std::endl;
    }

    bool sacar(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            std::cout << "Saque de " << valor << " realizado na conta " << tipo << std::endl;
            return true;
        } else {
            std::cout << "Saldo insuficiente na conta " << tipo << std::endl;
            return false;
        }
    }
};

int main() {
    std::vector<Conta> contas;
    contas.emplace_back("Corrente", 1000);
    contas.emplace_back("Sal�rio", 1500);
    contas.emplace_back("Poupan�a", 500);

    for (auto& conta : contas) { // Removido o 'const' antes de 'auto&'
        conta.sacar(200);
    }

    return 0;
}

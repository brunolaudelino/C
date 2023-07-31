#include <iostream>
#include <string>

using namespace std;

enum class Naipe { Paus, Ouros, Copas, Espadas };
enum class Valor { Ás = 1, Valete, Dama, Rei };

constexpr const char* naipeText[] = { "Paus", "Ouros", "Copas", "Espadas" };
constexpr const char* valorText[] = { "", "Ás", "Valete", "Dama", "Rei" }; // O valor 0 é vazio, pois não corresponde a nenhum valor de carta

class Carta {
private:
    Naipe naipe;
    Valor valor;

public:
    Carta(Naipe n, Valor v) : naipe(n), valor(v) {}

    Naipe getNaipe() {
        return naipe;
    }

    Valor getValor() {
        return valor;
    }
};

int main() {
    int valorEscolhido, naipeEscolhido;
    cin >> valorEscolhido;

    switch (valorEscolhido) {
        case 1:
        case 2:
        case 3:
        case 4:
            break;
        default:
            cout << "Valor inválido. Escolha um valor entre 1 e 4." << endl;
            return 1; // Sai do programa com um código de erro
    }

    cin >> naipeEscolhido;

    switch (naipeEscolhido) {
        case 0:
        case 1:
        case 2:
        case 3:
            break;
        default:
            cout << "Naipe inválido. Escolha um naipe entre 0 e 3." << endl;
            return 1; // Sai do programa com um código de erro
    }

    Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

    cout << "Carta escolhida: " << valorText[valorEscolhido] << " de " << naipeText[naipeEscolhido] << endl;

    return 0;
}

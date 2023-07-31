#include <iostream>

class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        key = value;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

class AVLTree {
private:
    Node* root;

    // Fun��es auxiliares para manipula��o da �rvore
    int getHeight(Node* node);
    int getBalanceFactor(Node* node);
    Node* rotateRight(Node* node);
    Node* rotateLeft(Node* node);
    Node* insert(Node* node, int value);

public:
    AVLTree() {
        root = nullptr;
    }

    // Fun��o p�blica para inserir um valor na �rvore
    void insert(int value);

    // Outras opera��es, como busca e remo��o, podem ser adicionadas conforme necess�rio
};

// Implementa��o das fun��es auxiliares

int AVLTree::getHeight(Node* node) {
    return (node == nullptr) ? 0 : node->height;
}

int AVLTree::getBalanceFactor(Node* node) {
    return (node == nullptr) ? 0 : getHeight(node->left) - getHeight(node->right);
}

Node* AVLTree::rotateRight(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* AVLTree::rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* AVLTree::insert(Node* node, int value) {
    if (node == nullptr)
        return new Node(value);

    if (value < node->key)
        node->left = insert(node->left, value);
    else if (value > node->key)
        node->right = insert(node->right, value);
    else // Valores iguais n�o s�o permitidos (voc� pode adaptar isso para suas necessidades)
        return node;

    node->height = std::max(getHeight(node->left), getHeight(node->right)) + 1;
    int balance = getBalanceFactor(node);

    // Verifica o balanceamento e realiza as rota��es, se necess�rio
    // Implementa��o completa requer an�lise detalhada dos casos de balanceamento
    if (balance > 1 && value < node->left->key)
        return rotateRight(node);

    if (balance < -1 && value > node->right->key)
        return rotateLeft(node);

    if (balance > 1 && value > node->left->key) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    if (balance < -1 && value < node->right->key) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

void AVLTree::insert(int value) {
    root = insert(root, value);
}

// Exemplo de uso

int main() {
    AVLTree avl;

    avl.insert(10);
    avl.insert(20);
    avl.insert(30);

    return 0;
}

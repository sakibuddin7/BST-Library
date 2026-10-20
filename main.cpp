#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* search(Node* root, int target) {
    Node* current = root;

    while (current != nullptr) {
        if (current->key == target) {
            return current; // Nodo trovato
        }
        
        if (target < current->key) {
            current = current->left; // Se la chiave è minore va a sinistra
        } else {
            current = current->right; // Se è maggiore va a destra
        }
    }

    return nullptr; // Se non lo trova restituisce nullptr
}

int main() {
    return 0;
}

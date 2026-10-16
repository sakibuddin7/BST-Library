#include "BST.h"
#include <iostream>

BST::BST() {
    radice = nullptr;
}

void BST::inserisci(int valore) {
    radice = inserisciRicorsivo(radice, valore);
}

Nodo* BST::inserisciRicorsivo(Nodo* nodo, int valore) {
    if (nodo == nullptr) {
        return new Nodo(valore);
    }
    
    if (valore < nodo->dato) {
        nodo->sinistro = inserisciRicorsivo(nodo->sinistro, valore);
    }

    else if (valore > nodo->dato) {
        nodo->destro = inserisciRicorsivo(nodo->destro, valore);
    }
    
    return nodo;
}

void BST::stampaInOrdine() {
    stampaInOrdineRicorsivo(radice);
    std::cout << std::endl;
}

void BST::stampaInOrdineRicorsivo(Nodo* nodo) {
    if (nodo != nullptr) {
        stampaInOrdineRicorsivo(nodo->sinistro);
        std::cout << nodo->dato << " ";
        stampaInOrdineRicorsivo(nodo->destro);
    }
}
#ifndef BST_H
#define BST_H

struct Nodo {
    int dato;
    Nodo* sinistro;
    Nodo* destro;
    
    Nodo(int valore) {
        dato = valore;
        sinistro = nullptr;
        destro = nullptr;
    }
};

class BST {
private:
    Nodo* radice;

    Nodo* inserisciRicorsivo(Nodo* nodo, int valore);
    
    void stampaInOrdineRicorsivo(Nodo* nodo);

public:
    BST();
    
    void inserisci(int valore);
    
    void stampaInOrdine();
};

#endif
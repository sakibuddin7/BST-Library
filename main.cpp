#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    BST albero;
    
    albero.inserisci(50);
    albero.inserisci(30);
    albero.inserisci(70);
    albero.inserisci(20);
    albero.inserisci(40);
    
    cout << "Elementi dell'albero stampati in ordine crescente:" << endl;
    albero.stampaInOrdine();
    
    return 0;
}
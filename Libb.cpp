#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* lchild;
    Node* rchild;

    Node (int k){
        key = k;
        lchild = rchild = nullptr;
    }
};

Node* search(Node* root, int target) {
    Node* current = root;

    while (current != nullptr) {
        if (current->key == target) {
            return current; 
        }
        
        if (target < current->key) {
            current = current->left; 
        } else {
            current = current->right; 
        }
    }

    return nullptr;
}

int main() {
    return 0;
}

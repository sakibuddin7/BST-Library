#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* lchild;
    Node* rchild;

    Node (int key){
        data = key;
        lchild = rchild = nullptr;
    }
};

Node* insert (Node*root, int val){
    Node* current = root;
    if (current == nullptr){
        return new Node(val);
    }

    if (val < current->data){
       current->lchild = insert (current->lchild, val);
    }

    if (val > current->data) {
        current->rchild = insert (current->rchild, val);
    }
    return current;
}


Node* search(Node* root, int target) {
    Node *current = root;
    if (target == current->data) return current;

    if (target < current->data) {
        return search (current ->lchild, target);
    }

    if (target > current->data) {
        return search (current->rchild, target);
    }
    return nullptr;
}

Node* findMin(Node* root){
    if (root == nullptr) return nullptr;
    Node*current = root;
    while (current->lchild != nullptr) {
        current = current->lchild;
    }
    return current;
}

Node* findMax(Node* root){
    if (root == nullptr) return nullptr;
    Node* current = root;
    while (current->rchild != nullptr){
        current = current->rchild;
    }
    return current;
}

int countNodes (const Node* root){
    if (root == nullptr) return 0;
    return 1 + countNodes(root->lchild) + countNodes (root->rchild);
}

int countLeaves (const Node* root){
    if (root == nullptr) return 0;
    if (root->lchild == nullptr && root->rchild == nullptr) return 1;
    return countLeaves(root->lchild) + countLeaves(root->rchild);
}

int main(){

    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val) {
    Node* node = new Node();
    node->data = val;
    node->left = node->right = nullptr;
    return node;
}

Node* insert(Node* root, int val) {
    if (!root) return createNode(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void printInRange(Node* root, int L, int R) {
    if (!root) return;
    if (root->data > L) printInRange(root->left, L, R);
    if (root->data >= L && root->data <= R)
        cout << root->data << " ";
    if (root->data < R) printInRange(root->right, L, R);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 10);
    insert(root, 1);
    insert(root, 6);
    insert(root, 14);
    insert(root, 4);
    insert(root, 7);
    
    cout << "Nodes in range [4, 10]: ";
    printInRange(root, 4, 10);
}

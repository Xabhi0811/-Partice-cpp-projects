#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int val) {
    if (root == nullptr) return createNode(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

int findMin(Node* root) {
    if (root == nullptr) return -1;
    while (root->left != nullptr)
        root = root->left;
    return root->data;
}

int findMax(Node* root) {
    if (root == nullptr) return -1;
    while (root->right != nullptr)
        root = root->right;
    return root->data;
}

int main() {
    Node* root = nullptr;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 10);
    insert(root, 1);
    insert(root, 6);
    insert(root, 14);

    cout << "Minimum value in BST: " << findMin(root) << endl;
    cout << "Maximum value in BST: " << findMax(root) << endl;
}

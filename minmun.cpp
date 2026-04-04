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
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

int findMin(Node* root) {
    while (root->left)
        root = root->left;
    return root->data;
}

int findMax(Node* root) {
    while (root->right)
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
    
    cout << "Minimum Value: " << findMin(root) << endl;
    cout << "Maximum Value: " << findMax(root) << endl;
}

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

Node* findMinNode(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;
        
        Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 10);
    insert(root, 1);
    insert(root, 6);
    insert(root, 14);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 3);
    
    cout << "Inorder after deletion: ";
    inorder(root);
}

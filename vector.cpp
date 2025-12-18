#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

Node* findLCA(Node* root, int n1, int n2) {
    if (root == NULL) return NULL;

   
    if (n1 < root->data && n2 < root->data)
        return findLCA(root->left, n1, n2);

  
    if (n1 > root->data && n2 > root->data)
        return findLCA(root->right, n1, n2);

 
    return root;
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int n1, n2;
    cout << "Enter two nodes: ";
    cin >> n1 >> n2;

    Node* lca = findLCA(root, n1, n2);
    if (lca)
        cout << "LCA of " << n1 << " and " << n2 << " is " << lca->data << endl;
    else
        cout << "Nodes not found in BST." << endl;

    return 0;
}

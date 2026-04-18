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






// Insert node into BST
Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

// Helper function to find kth smallest element
void kthSmallestUtil(Node* root, int& k, int& ans) {
    if (root == NULL)
        return;

    // Inorder traversal (Left, Root, Right)
    kthSmallestUtil(root->left, k, ans);

    k--; // visit this node
    if (k == 0) {
        ans = root->data;
        return;
    }

    kthSmallestUtil(root->right, k, ans);
}

// Main function to find kth smallest
int kthSmallest(Node* root, int k) {
    int ans = -1;
    kthSmallestUtil(root, k, ans);
    return ans;
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

    int k;
    cout << "Enter k: ";
    cin >> k;

    int result = kthSmallest(root, k);
    if (result != -1)
        cout << k << "th smallest element is " << result << endl;
    else
        cout << "Invalid k" << endl;

    return 0;
}

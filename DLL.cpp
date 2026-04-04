#include <stdio.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};


Node* insertNode(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insertNode(root->left, key);
    else if (key > root->data) root->right = insertNode(root->right, key);
    // ignore duplicates
    return root;
}

bool searchNode(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;
    if (key < root->data) return searchNode(root->left, key);
    return searchNode(root->right, key);
}

void inorder(Node* root, vector<int>& out) {
    if (!root) return;
    inorder(root->left, out);
    out.push_back(root->data);
    inorder(root->right, out);
}

void printInorder(Node* root) {
    if (!root) { cout << "Empty\n"; return; }
    vector<int> v; inorder(root, v);
    for (int x : v) cout << x << " ";
    cout << "\n";
}

int findMin(Node* root) {
    if (!root) throw runtime_error("Empty tree");
    while (root->left) root = root->left;
    return root->data;
}

int findMax(Node* root) {
    if (!root) throw runtime_error("Empty tree");
    while (root->right) root = root->right;
    return root->data;
}

Node* findMinNode(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
       
        if (!root->left && !root->right) {
            delete root;
            return nullptr;
        } else if (!root->left) {
            Node* r = root->right;
            delete root;
            return r;
        } else if (!root->right) {
            Node* l = root->left;
            delete root;
            return l;
        } else {
            Node* succ = findMinNode(root->right);
            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
    }
    return root;
}


void kthSmallestUtil(Node* root, int &k, int &ans) {
    if (!root || k <= 0) return;
    kthSmallestUtil(root->left, k, ans);
    if (k <= 0) return;
    k--;
    if (k == 0) { ans = root->data; return; }
    kthSmallestUtil(root->right, k, ans);
}

int kthSmallest(Node* root, int k) {
    int ans = -1;
    kthSmallestUtil(root, k, ans);
    return ans;
}

int kthLargest(Node* root, int k) {
   
    vector<int> v;
    
    stack<Node*> st;
    Node* cur = root;
    while (cur || !st.empty()) {
        while (cur) { st.push(cur); cur = cur->right; }
        cur = st.top(); st.pop();
        v.push_back(cur->data);
        cur = cur->left;
    }
    if (k <= 0 || k > (int)v.size()) return -1;
    return v[k-1];
}


Node* findLCA(Node* root, int n1, int n2) {
    if (!root) return nullptr;
    if (root->data > n1 && root->data > n2) return findLCA(root->left, n1, n2);
    if (root->data < n1 && root->data < n2) return findLCA(root->right, n1, n2);
    return root;
}


bool isBSTUtil(Node* root, long long minV, long long maxV) {
    if (!root) return true;
    if (root->data <= minV || root->data >= maxV) return false;
    return isBSTUtil(root->left, minV, root->data) && isBSTUtil(root->right, root->data, maxV);
}
bool isBST(Node* root) { return isBSTUtil(root, LLONG_MIN, LLONG_MAX); }


void bstToDllUtil(Node* root, Node*& prev, Node*& head) {
    if (!root) return;
    bstToDllUtil(root->left, prev, head);
    if (!prev) head = root;
    else {
        prev->right = root;
        root->left = prev;
    }
    prev = root;
    bstToDllUtil(root->right, prev, head);
}

Node* bstToDll(Node* root) {
    Node* prev = nullptr;
    Node* head = nullptr;
    bstToDllUtil(root, prev, head);
    return head; 
}

void printDLL(Node* head) {
    Node* cur = head;
    while (cur) {
        cout << cur->data;
        if (cur->right) cout << " <-> ";
        cur = cur->right;
    }
    cout << "\n";
}


Node* sortedArrayToBST(const vector<int>& arr, int l, int r) {
    if (l > r) return nullptr;
    int mid = l + (r - l) / 2;
    Node* root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr, l, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, r);
    return root;
}


vector<int> mergeSortedVectors(const vector<int>& a, const vector<int>& b) {
    vector<int> res;
    int i=0, j=0;
    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] < b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while (i < (int)a.size()) res.push_back(a[i++]);
    while (j < (int)b.size()) res.push_back(b[j++]);
    return res;
}

Node* mergeBSTs(Node* root1, Node* root2) {
    vector<int> a, b;
    inorder(root1, a);
    inorder(root2, b);
    vector<int> merged = mergeSortedVectors(a,b);
   
    vector<int> uniq;
    for (int x : merged) {
        if (uniq.empty() || uniq.back() != x) uniq.push_back(x);
    }
    if (uniq.empty()) return nullptr;
    return sortedArrayToBST(uniq, 0, (int)uniq.size()-1);
}


int height(Node* root) {
    if (!root) return -1;
    return 1 + max(height(root->left), height(root->right));
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}


void freeTree(Node* root) {
    if (!root) return;
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}


void showMenu() {
    cout << "\n--- BST Operations Menu ---\n";
    cout << "1  Insert\n2  Print Inorder\n3  Search\n4  Delete\n5  Find Min & Max\n6  Kth Smallest\n7  Kth Largest\n8  LCA\n9  Check Valid BST\n10 Convert BST to Doubly Linked List\n11 Merge with another BST\n12 Height\n13 Count Nodes\n0  Exit\nChoose option: ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node* root = nullptr;
    Node* otherRoot = nullptr; // for merging demo

    cout << "Binary Search Tree Interactive Demo\n";
    while (true) {
        showMenu();
        int choice; if (!(cin >> choice)) break;

        if (choice == 0) break;

        if (choice == 1) {
            cout << "Enter value to insert: ";
            int v; cin >> v; root = insertNode(root, v);
        } else if (choice == 2) {
            cout << "Inorder (sorted): ";
            printInorder(root);
        } else if (choice == 3) {
            cout << "Enter value to search: ";
            int v; cin >> v;
            cout << (searchNode(root, v) ? "Element Found\n" : "Element Not Found\n");
        } else if (choice == 4) {
            cout << "Enter value to delete: ";
            int v; cin >> v; root = deleteNode(root, v);
            cout << "After deletion, inorder: "; printInorder(root);
        } else if (choice == 5) {
            try {
                cout << "Min = " << findMin(root) << ", Max = " << findMax(root) << "\n";
            } catch (exception& e) { cout << "Tree empty\n"; }
        } else if (choice == 6) {
            cout << "Enter k: "; int k; cin >> k;
            int ans = kthSmallest(root, k);
            if (ans == -1) cout << "Invalid k or tree empty\n"; else cout << k << "th smallest = " << ans << "\n";
        } else if (choice == 7) {
            cout << "Enter k: "; int k; cin >> k;
            int ans = kthLargest(root, k);
            if (ans == -1) cout << "Invalid k or tree empty\n"; else cout << k << "th largest = " << ans << "\n";
        } else if (choice == 8) {
            cout << "Enter two node values (n1 n2): ";
            int n1, n2; cin >> n1 >> n2;
            Node* lca = findLCA(root, n1, n2);
            if (lca) cout << "LCA = " << lca->data << "\n"; else cout << "LCA not found (one or both nodes missing)\n";
        } else if (choice == 9) {
            cout << (isBST(root) ? "This is a valid BST\n" : "Not a valid BST\n");
        } else if (choice == 10) {
            if (!root) { cout << "Empty tree\n"; continue; }
            Node* head = bstToDll(root);
            cout << "Doubly linked list (in-order): ";
            printDLL(head);
           
        } else if (choice == 11) {
            cout << "Build/Insert nodes into second BST for merging.\n";
            while (true) {
                cout << "Enter value to insert into second BST (or 'x' to stop): ";
                string tok; cin >> tok;
                if (tok == "x" || tok == "X") break;
                int val = stoi(tok);
                otherRoot = insertNode(otherRoot, val);
            }
            Node* merged = mergeBSTs(root, otherRoot);
            cout << "Merged BST inorder: ";
            printInorder(merged);
          
        } else if (choice == 12) {
            cout << "Height = " << height(root) << "\n";
        } else if (choice == 13) {
            cout << "Node count = " << countNodes(root) << "\n";
        } else {
            cout << "Invalid option\n";
        }
    }

    freeTree(root);
    freeTree(otherRoot);
    cout << "Goodbye!\n";
    return 0;
}

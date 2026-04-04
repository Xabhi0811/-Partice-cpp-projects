#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    Node* reverseK(Node* head, int k) {
        Node *prev = nullptr, *curr = head, *next = nullptr;
        int count = 0;

        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if (next)
            head->next = reverseK(next, k);

        return prev;
    }

    void display(Node* node) {
        while (node) {
            cout << node->data << " -> ";
            node = node->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    for (int i = 1; i <= 6; i++)
        list.insertEnd(i);

    cout << "Original List: ";
    list.display(list.head);

    int k = 2;
    list.head = list.reverseK(list.head, k);

    cout << "Reversed in groups of " << k << ": ";
    list.display(list.head);

    return 0;
}

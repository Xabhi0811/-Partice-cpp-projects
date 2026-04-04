#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* deleteFromEnd(Node* head, int n) {
    Node* first = head;
    Node* second = head;

    for (int i = 0; i < n; i++) {
        if (second == NULL) return head;
        second = second->next;
    }

    if (second == NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while (second->next != NULL) {
        first = first->next;
        second = second->next;
    }

    Node* temp = first->next;
    first->next = first->next->next;
    delete temp;

    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = deleteFromEnd(head, 2);
    cout << "After deleting 2nd node from end: ";
    printList(head);
}

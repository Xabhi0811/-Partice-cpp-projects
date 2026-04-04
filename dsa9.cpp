#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void removeDuplicates(Node* head) {
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);

    cout << "Before removing duplicates: ";
    printList(head);

    removeDuplicates(head);

    cout << "After removing duplicates: ";
    printList(head);
}

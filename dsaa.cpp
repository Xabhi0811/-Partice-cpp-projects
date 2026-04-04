#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* reverseRecursive(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

void printList(Node* head) {
    while (head != NULL) {
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

    cout << "Original List: ";
    printList(head);

    head = reverseRecursive(head);

    cout << "Reversed List: ";
    printList(head);
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to find the middle of linked list
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        // move by one
        fast = fast->next->next;  // move by two
    }

    return slow;
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    cout << "Linked List: ";
    printList(head);

    Node* middle = findMiddle(head);
    cout << "Middle element: " << middle->data << endl;

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
    Node* head;
public:
    CircularLinkedList() { head = NULL; }

    void insertAtEnd(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    void printList() {
        if (head == NULL) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)\n";
    }
};

int main() {
    CircularLinkedList clist;
    clist.insertAtEnd(1);
    clist.insertAtEnd(2);
    clist.insertAtEnd(3);
    clist.printList();
}

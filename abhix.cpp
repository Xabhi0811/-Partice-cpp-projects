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

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at beginning
    void insertAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        head = n;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* n = new Node(val);
        if (head == NULL) {
            head = n;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }

    // Delete a node
    void deleteNode(int val) {
        if (head == NULL) return;

        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == NULL) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    cout << "Linked List: ";
    list.display();

    list.deleteNode(20);
    cout << "After deleting 20: ";
    list.display();

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
public:
    LinkedList() { head = NULL; }

    void insertAtEnd(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    void deleteValue(int val) {
        if (head == NULL) return;
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* prev = head;
        Node* curr = head->next;
        while (curr != NULL && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }
        if (curr == NULL) return;
        prev->next = curr->next;
        delete curr;
    }

    void printList() {
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
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.printList();
    list.deleteValue(20);
    cout << "After deletion: ";
    list.printList();
}

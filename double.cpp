#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteValue(int val) {
        Node* temp = head;
        while (temp != nullptr && temp->data != val)
            temp = temp->next;

        if (temp == nullptr) return;

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertFront(10);
    dll.insertFront(20);
    dll.insertEnd(30);
    dll.insertEnd(40);
    dll.display();

    dll.deleteValue(20);
    dll.display();

    return 0;
}

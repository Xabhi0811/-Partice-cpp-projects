#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node *head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at front
    void insertFront(int val) {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertEnd(int val) {
        Node *newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete first occurrence of a value
    void deleteValue(int val) {
        if (head == nullptr) return;

        // If head itself is to be deleted
        if (head->data == val) {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node *prev = head;
        Node *cur = head->next;
        while (cur != nullptr && cur->data != val) {
            prev = cur;
            cur = cur->next;
        }
        if (cur == nullptr) {
            // value not found
            return;
        }
        prev->next = cur->next;
        delete cur;
    }

    // Search for a value (returns true if found)
    bool search(int val) {
        Node *temp = head;
        while (temp != nullptr) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Print the list
    void printList() {
        Node *temp = head;
        if (temp == nullptr) {
            cout << "List is empty\n";
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Destructor to free memory
    ~LinkedList() {
        Node *cur = head;
        while (cur != nullptr) {
            Node *nextNode = cur->next;
            delete cur;
            cur = nextNode;
        }
    }
};

int main() {
    LinkedList list;

    list.insertFront(3);
    list.insertFront(5);
    list.insertEnd(10);
    list.insertEnd(20);

    cout << "List: ";
    list.printList();  // should output “5 -> 3 -> 10 -> 20 -> NULL”

    cout << "Searching for 10: ";
    if (list.search(10)) cout << "Found\n";
    else cout << "Not Found\n";

    cout << "Deleting 3 and 20\n";
    list.deleteValue(3);
    list.deleteValue(20);

    cout << "List after deletion: ";
    list.printList();  // should output “5 -> 10 -> NULL”

    return 0;
}

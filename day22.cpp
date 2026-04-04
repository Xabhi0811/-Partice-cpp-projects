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

    static Node* mergeLists(Node* a, Node* b) {
        if (!a) return b;
        if (!b) return a;

        if (a->data < b->data) {
            a->next = mergeLists(a->next, b);
            return a;
        } else {
            b->next = mergeLists(a, b->next);
            return b;
        }
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
    LinkedList list1, list2;

    list1.insertEnd(1);
    list1.insertEnd(3);
    list1.insertEnd(5);

    list2.insertEnd(2);
    list2.insertEnd(4);
    list2.insertEnd(6);

    cout << "List 1: "; list1.display(list1.head);
    cout << "List 2: "; list2.display(list2.head);

    Node* mergedHead = LinkedList::mergeLists(list1.head, list2.head);

    cout << "Merged List: ";
    list1.display(mergedHead);

    return 0;
}

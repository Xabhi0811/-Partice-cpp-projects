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

    Node* merge(Node* left, Node* right) {
        if (!left) return right;
        if (!right) return left;

        Node* result = nullptr;

        if (left->data <= right->data) {
            result = left;
            result->next = merge(left->next, right);
        } else {
            result = right;
            result->next = merge(left, right->next);
        }
        return result;
    }

    Node* getMiddle(Node* head) {
        if (!head) return head;
        Node* slow = head;
        Node* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeSort(Node* head) {
        if (!head || !head->next)
            return head;

        Node* middle = getMiddle(head);
        Node* nextToMiddle = middle->next;
        middle->next = nullptr;

        Node* left = mergeSort(head);
        Node* right = mergeSort(nextToMiddle);

        return merge(left, right);
    }

    void sortList() {
        head = mergeSort(head);
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertEnd(4);
    list.insertEnd(2);
    list.insertEnd(1);
    list.insertEnd(3);

    cout << "Original List: ";
    list.display();

    list.sortList();

    cout << "Sorted List: ";
    list.display();

    return 0;
}

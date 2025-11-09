#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* Middleone(Node* head) {
    if (!head) return nullptr;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow; // return the middle node
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40); // added one more to test even-size list

    Node* mid = Middleone(head);
    if (mid) cout << "Middle: " << mid->data << "\n";
    else cout << "List is empty\n";

    // simple cleanup
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;
}
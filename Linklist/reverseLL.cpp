#include <iostream>
using namespace std;
class Linklist{
    public:
        int data;
        Linklist* next;
        Linklist(int value){
            data=value;
            next=NULL;
        }
};

int main() {
    Linklist* head = new Linklist(1);
    head->next = new Linklist(2);
    head->next->next = new Linklist(3);
    head->next->next->next = new Linklist(4);
    head->next->next->next->next = new Linklist(5);

    Linklist* prev = NULL;
    Linklist* current = head;
    Linklist* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    Linklist* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
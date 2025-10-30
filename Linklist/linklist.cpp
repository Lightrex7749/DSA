#include <iostream>
using namespace std;
class linklist
{
public:
    int data;
    linklist* next;
    linklist(int value){
        data = value;
        next = nullptr;
    }
};
 linklist* reverseList(linklist* head) {
    linklist *prev=NULL,*curr,*next=NULL;
    curr=head;
        while (curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }





int main() {
    linklist* head = new linklist(10);
    head->next = new linklist(20);
    head->next->next = new linklist(30);

    
    linklist* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

   
    current = head;
    linklist* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
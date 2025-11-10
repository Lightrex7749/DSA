#include <iostream>
using namespace std;
class stack{
    private:
        int *arr;
        int top;
        int capacity;
    
    public:
        stack(int size = 10){
            arr = new int[size];
            capacity = size;
            top = -1;
        }

        void push(int x){
            if(isFull()){
                cout << "Stack Overflow\n";
                exit(EXIT_FAILURE);
            }
            arr[++top] = x;
        }
        int pop(){
            if(isEmpty()){
                cout << "Stack Underflow\n";
                exit(EXIT_FAILURE);
            }
            return arr[top--];
        }
        int peek(){
            if(isEmpty()){
                cout << "Stack is empty\n";
                exit(EXIT_FAILURE);
            }
            return arr[top];
        }
        bool isEmpty(){
            return top == -1;
        }
        bool isFull(){
            return top == capacity - 1;
        }
};


int main() {
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top element is: " << st.peek() << endl;
    cout << "Elements: ";
    while(!st.isEmpty()){
        cout << st.pop() << " ";
    }
    cout << endl;
    
    return 0;
}
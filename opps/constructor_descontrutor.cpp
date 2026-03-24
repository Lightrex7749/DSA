#include <iostream>
using namespace std;
class Con{
    public:
        Con(){
            cout<<"Constructor called"<<endl;
        }
};
class Dec:public Con{
    public:
        ~Dec(){
            cout<<"Destructor called"<<endl;
        }
};


int main() {
    Dec d;
    Con a;
    Dec b;
    ṇDec c;

    return 0;
}
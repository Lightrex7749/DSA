#include <iostream>
using namespace std;

int main() {
    float si,r,p,t;
    cout<< "enter Principle,rate,time: ";
    cin >> p;
    cin>> r;
    cin>>t;
    cout<< "Simple interest :- "  << (p*r*t)*0.01;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long si,r,p,t;
    cout<< "enter Principle,rate,time: ";
    cin >> p;
    cin>> r;
    cin>>t;
    cout<< "Compound interest :- "  << p * pow((1+r/100),t);
    return 0;
}
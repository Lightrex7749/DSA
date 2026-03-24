#include <bits/stdc++.h>
using namespace std;

class fetch{
    public:
        vector<int> arr;
        string s;
        fetch(string name){
             ifstream file(name);
             while (getline(file , s)){
                for(char a:s){
                    if (isdigit(a)){
                        arr.push_back((int)a);
                        cout<<a<<endl;
                    }
                }
             }  
             }
             
        };


    

int main() {
    fetch("hello.txt");
    return 0;
}
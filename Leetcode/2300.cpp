#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> data={21,34,5,56,767,87,42,443,666,8,0,65,12,32,9};
    int n=data.size();
    bool flag=false;
    for(int i =0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if (data[j]>data[j+1]){
                swap(data[j+1], data[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<< data[i]<<" ";
    }
    
    return 0;
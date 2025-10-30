#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr={6,9,5,2,11,7,1,19};
    int key,i,j;
    int n=arr.size()-1;
    for(i=1;i<=n;i++){
        key =arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
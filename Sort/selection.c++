#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> data={21,34,5,56,767,87,42,443,-666,8,0,-65,12,32,9};
    int n=data.size();
    for(int i =0;i<n;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if (data[j]<data[min]){
                min = j;
            }
        }
        swap(data[i], data[min]);
    }
    for(int i=0;i<n;i++){
        cout<< data[i]<<" ";
    }
    
    return 0;
}
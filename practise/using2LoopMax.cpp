#include <iostream>
#include <array>

 using namespace std;
int main() {
    int max=0;
   int arr[]={1,-2,3,6};
   int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int psun=0;
        for (int j =i;j<size;j++){
            psun+=arr[j];
            if (psun>max){
                max=psun;
            }
        }
    }
    cout<<max;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int nums[] = {2,0,2,1,1,0};
    int length=sizeof(nums)/sizeof(nums[0]);
    int s=0,m=0,e=length-1;
    while(m<=e) {
        if(nums[m]==0) {
            swap(nums[s],nums[m]);
            s++;
            m++;
        }
        else if(nums[m]==2) {
            swap(nums[m],nums[e]);
            e--;
        }
        else {
            m++;
        }
    }
    for(int i=0;i<length;i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}
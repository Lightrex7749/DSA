#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0,right=0,ans=0;
        long sum=0;
        for(right=0;right<n;right++){
            sum+=nums[right];
            while(((long)nums[right]*(right-left+1)) > k+sum ){
                sum-=nums[left];
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }

int main() {
    vector<int> nums = {1, 2, 4};
    int k = 5;
    cout << "Maximum frequency: " << maxFrequency(nums, k) << endl; 
    return 0;
}
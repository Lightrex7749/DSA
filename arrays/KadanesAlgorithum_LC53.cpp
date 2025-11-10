#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarray(vector<int>& nums) {
    int maxSoFar = nums[0];
    int currMax = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        currMax = max(nums[i], currMax + nums[i]);
        maxSoFar = max(maxSoFar, currMax);
    }
    return maxSoFar;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum subarray sum is " << maxSubarray(nums) << endl;
    
    return 0;
}
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=nums.size(),maxx=0, cur=0,i=0;
        for(int num:nums){
            if(num==1){
                cur++;
                maxx=max(cur,maxx);
            }
            else{
                cur=0;
            }
        }
    return maxx;
    }
};
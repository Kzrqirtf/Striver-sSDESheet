class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int tempSum = 0;
        int maxm = nums[0];
        for(auto x: nums){
            tempSum += x;
            maxm = max(tempSum, maxm);
            if(tempSum<0)
            {
                tempSum = 0;
            }
        }
        return maxm;
        
        
    }
};
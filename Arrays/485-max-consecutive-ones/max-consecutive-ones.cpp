class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int ans=INT_MIN;
        int count=0;
        for(auto i : nums)
        {
            if(i==0)
            {
                ans=max(ans,count);
                count=0;
            }
            else
                count++;
        }
        return max(count,ans);
        
    }
};
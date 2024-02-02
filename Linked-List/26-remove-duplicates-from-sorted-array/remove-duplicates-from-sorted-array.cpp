class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i =0, j=1, k=1;
        int n = nums.size();
        for(;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                k++;
                i++;
                nums[i]=nums[j];
            }
        }
        return k;
        
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        for(auto i : nums)
        {
            if(i>=0)
                positive.push_back(i);
            else
                negative.push_back(i);
        }
        int n = nums.size();
        int i=0,j=0;
        while(n)
        {
            if(n%2 == 0)
            {
                ans.push_back(positive[i++]);
            }
            else
                ans.push_back(negative[j++]);
            n--;

        }
        return ans;
        
    }
};
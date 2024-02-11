class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        //--------Brute Force------------//
        // vector<int> ans;
        // int end=k-1;
        // int start = 0;
        // int n = nums.size();
        // while(end<n)
        // {
        //     ans.push_back(*max_element(nums.begin()+start,nums.begin()+end+1));
        //     start++;
        //     end++;
        // }
        // return ans;
    deque <int> dq;
    vector<int> ans;
    for(int i =0 ;i<nums.size();i++)
    {
        if(!dq.empty() && dq.front() == i-k)
            dq.pop_front();
        while(!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();
        dq.push_back(i);
        if(i >= k-1)
            ans.push_back(nums[dq.front()]);
    }
    return ans;
        
    }
};
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
    
        // Initialize a deque and a vector to store the maximum values and return at the end
        deque<int> dq;
        vector<int> ans;
        
        // Iterate through the input vector 'nums'
        for(int i = 0; i < nums.size(); i++) {
            // If the deque is not empty and the front element is out of the window range, remove it
            if(!dq.empty() && dq.front() == i - k)
                dq.pop_front();
            
            // Remove all elements from the back of the deque which are smaller than the current element
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            
            // Push the current element's index into the deque
            dq.push_back(i);
            
            // If the current index has reached the window size or greater, 
            // it means we have a full window and we can start recording maximum values
            if(i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        
        // Return the vector containing maximum values for each sliding window
        return ans;
    }
};

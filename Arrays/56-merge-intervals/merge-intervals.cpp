class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> temp = intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>temp[1]){
                ans.push_back(temp);
                temp=intervals[i];
            }
            else{
                if(intervals[i][1]>temp[1])
                    temp[1]=intervals[i][1];
            }

        }
        ans.push_back(temp);
        return ans;
    }
        
    
};
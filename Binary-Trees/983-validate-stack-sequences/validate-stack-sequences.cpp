class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped){
        stack<int> st;
        int n=pushed.size();
        int i=0,j=0;
        while(i<=n)
        {
            while(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
                if(st.empty())break;
            }
            if(i<n)
            {    st.push(pushed[i]);}
                i++;
        }
        if(st.empty())return true;
        return false;
    }
};
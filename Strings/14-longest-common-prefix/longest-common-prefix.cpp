class Solution {
public:
    void prefix(string s1,string s2, string &s)
    {
        int i=0;
        string news="";
        while(s1[i]==s2[i] && i < s1.size() && i < s2.size())
        {
            news += s1[i];
            i++;
        }
        s=news;
    }
    string longestCommonPrefix(vector<string>& strs)
    {
        int n= strs.size();
        if(n==1)return strs[0];
        sort(strs.begin(),strs.end());
        string s="";
        prefix(strs[0],strs[n-1],s);
        // for(int i=2;i<n;i++)
        // {
        //     prefix(s,strs[i],s);
        // }
          
        return s;
        
    }
};
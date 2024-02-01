class Solution {
public:
    void CAS(string &s)
    {
        if(s.size()==1){ s="1"+s;return;}
        string str="";
        int count=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
            {
                count++;
            }
            else
            {
                str+=to_string(count)+s[i-1];
                count=1;
            }
        }
        str+=to_string(count)+s[s.size()-1];
        cout<<str<<endl;
        s= str;
        

    }
    string countAndSay(int n)
    {
        string s="1";
        if(n==1) return s;
        for(int i=2;i<=n;i++)
        {
            CAS(s);
        }
        return s;
        
    }
};
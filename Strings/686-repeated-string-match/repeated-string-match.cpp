class Solution {
public:

    int repeatedStringMatch(string a, string b)
    {
        int a1 = a.length();
        int b1 = b.length();
        int n, ans=-1;
        if(b1>=a1)
        {
            n=floor(b1/a1)+1;
        }
        else
            n=2;
        string str = a;
        for(int i=0 ; i <= n ; i++)
        {
            int d = str.find(b);
            if(d!=-1) return i+1;
            str+=a;
        }

        
        return ans;
    }
};
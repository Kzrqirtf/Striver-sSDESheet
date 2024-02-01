class Solution {
public:
    bool isAnagram(string s, string t)
    {
        // if(s.size()!=t.size())
        //     return false;
        // vector<int> sv(26,0);
        // vector<int> tv(26,0);
        // for(int i=0;i<s.size();i++)
        // {
        //     sv[s[i]-97]++;
        //     tv[t[i]-97]++;
        // }
        // if (sv!=tv)return false;
        // return true;
        int count[26] = {0};
        
        // Count the frequency of characters in string s
        for (char x : s) {
            count[x - 'a']++;
        }
        
        // Decrement the frequency of characters in string t
        for (char x : t) {
            count[x - 'a']--;
        }
        for(auto i : count)
        {
            if(i!=0)return false;
        }
        return true;
        
    }
};
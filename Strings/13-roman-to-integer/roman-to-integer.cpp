class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans=romanMap[s[s.size()-1]];
        for(int i=s.size()-2;i>=0;i--)
        {
            if(romanMap[s[i+1]]<=romanMap[s[i]])
                ans+=romanMap[s[i]];
            else
                ans-=romanMap[s[i]];
        }
        return ans;
        
    }
};
class Solution {
public:
    string isPalindrome(string word)
    {
        reverse(word.begin(),word.end());
        return word;
    }
    string firstPalindrome(vector<string>& words)
    {
        string ans="";
        for(auto i:words)
        {
            string b=i;
            string a=isPalindrome(b);
            if(a==b)
            {
                ans=a;
                return ans;
            }
            else continue;
        }
        return ans;        
    }
};
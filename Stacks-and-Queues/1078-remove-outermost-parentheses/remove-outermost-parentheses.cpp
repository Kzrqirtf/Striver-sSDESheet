class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        stack<char> parenthesesStack;
        
        int openCount = 0; // to keep track of the outermost open parentheses
        
        for (char c : s) {
            if (c == '(') {
                if (openCount > 0) {
                    result += c; // add only if it's not the outermost '('
                }
                parenthesesStack.push(c);
                openCount++;
            } else if (c == ')') {
                parenthesesStack.pop();
                openCount--;
                if (openCount > 0) {
                    result += c; // add only if it's not the outermost ')'
                }
            }
        }
        
        return result;
    }
};
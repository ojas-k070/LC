class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> openBrackets;
        string result = "";
        
        for (char c : s) {
            if (c == '(') {
                openBrackets.push_back(result.length());
            } else if (c == ')') {
                int start = openBrackets.back();
                openBrackets.pop_back();
                reverse(result.begin() + start, result.end());
            } else {
                result += c;
            }
        }
        
        return result;
    }
};
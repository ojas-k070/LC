class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int st = 0;
        int ed = s.length() - 1;

        while (st < ed) {
            
            while (st < ed && !isVowel(s[st])) {
                st++;
            }
            
            while (st < ed && !isVowel(s[ed])) {
                ed--;
            }
            
            
            if (st < ed) {
                swap(s[st], s[ed]);
                st++;
                ed--;
            }
        }

        return s;
    }
};
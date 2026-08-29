class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> counts;

        for (char ch : s) counts[ch]++;
        
        for (char ch : t) {
            counts[ch]--;
            
            if (counts[ch] < 0) {
                return false;
            }
        }

        return true;
    }
};

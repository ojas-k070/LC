class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            int rev_alphabet_idx = 26 - (s[i] - 'a');
            total += rev_alphabet_idx * (i + 1);
        }
        return total;
    }
};
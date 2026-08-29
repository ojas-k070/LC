class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ms;
        unordered_map<char,int>mt;
        if (s.size()!= t.size()){
            return false;
        }
        else{
            for (int ch : s){
            ms[ch]++;
        }
        for (int c : t){
            mt[c]++;
        }
        for (auto const& [character, frequency] : ms) {
            if (mt[character] != frequency) {
                return false; 
            }
        }

        return true;

        }

        
        
    }
};
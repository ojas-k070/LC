class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(),nums.end());
        int multi=k;
        while(s.count(multi)){
            multi=multi+k;
        }
        return multi;
        
    }
};
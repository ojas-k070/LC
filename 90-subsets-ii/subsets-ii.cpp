class Solution {
public:
    void printsub(vector<int>& nums, vector<int>& ans, int i, set<vector<int>>& uniqueSubsets) {
        if (i == nums.size()) {
            uniqueSubsets.insert(ans);
            return;
        }

        ans.push_back(nums[i]);
        printsub(nums, ans, i + 1, uniqueSubsets);

        
        ans.pop_back();
        printsub(nums, ans, i + 1, uniqueSubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>> uniqueSubsets;
        vector<int> ans;

        printsub(nums, ans, 0, uniqueSubsets);

        return vector<vector<int>>(uniqueSubsets.begin(), uniqueSubsets.end());
    }
};
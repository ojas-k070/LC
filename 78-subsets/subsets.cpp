class Solution {
public:
    void subarr(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& allsubarrays) {
        if (i == arr.size()) {
            allsubarrays.push_back(ans);
            return;
        }
        
        ans.push_back(arr[i]);
        subarr(arr, ans, i + 1, allsubarrays);
        
        
        ans.pop_back();
        subarr(arr, ans, i + 1, allsubarrays);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allsubarrays;
        subarr(nums, ans, 0, allsubarrays);
        return allsubarrays;
    }
};
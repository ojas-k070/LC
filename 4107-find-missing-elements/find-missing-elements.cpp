class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;

        unordered_set<int> present(nums.begin(), nums.end());

        for (int num : nums) {
            smallest = min(smallest, num);
            largest = max(largest, num);
        }

        vector<int> ans;

        
        for (int i = smallest; i <= largest; i++) {
           
            if (present.find(i) == present.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
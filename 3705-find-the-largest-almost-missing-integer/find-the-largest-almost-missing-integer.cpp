class Solution {
public:
    int largestInteger(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> window_count;

        
        for (int st = 0; st <= n - k; st++) {
            std::unordered_set<int> unique_in_window;
            
            for (int i = st; i < st + k; i++) {
                unique_in_window.insert(nums[i]);
            }

           
            for (int num : unique_in_window) {
                window_count[num]++;
            }
        }

        int ans = -1;
        for (auto& [num, count] : window_count) {
            if (count == 1) {
                ans = std::max(ans, num);
            }
        }

        return ans;
    }
};
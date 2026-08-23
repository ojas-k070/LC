class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int original_size = nums.size();
        
        
        vector<int> newa;
        newa.reserve(original_size * 2);
        newa.insert(newa.end(), nums.begin(), nums.end());
        newa.insert(newa.end(), nums.begin(), nums.end());
        
        int n = newa.size();
        stack<int> s;
        vector<int> ans(n); 

        
        for(int i = n - 1; i >= 0; i--) {
            
            while(s.size() > 0 && s.top() <= newa[i]) {
                s.pop();
            }
            
            if(s.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }
            
            
            s.push(newa[i]);
        }
        
        
        ans.resize(original_size);
        return ans;
    }
};

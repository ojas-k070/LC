class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& n, int target) {
        vector<vector<int>> ans;
        int s = n.size();
        
        sort(n.begin(), n.end()); 
        
        for (int i = 0; i < s; i++) {
           
            if (i > 0 && n[i] == n[i-1]) continue;
            
            
            for (int j = i + 1; j < s; j++) {
              
                if (j > i + 1 && n[j] == n[j-1]) continue;
                
                int k = j + 1;
                int l = s - 1;
                
                while (k < l) {
                    
                    long long sum = (long long)n[i] + n[j] + n[k] + n[l];
                    
                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        ans.push_back({n[i], n[j], n[k], n[l]});
                        k++;
                        l--;
                        
                        
                        while (k < l && n[k] == n[k-1]) k++;
                        
                        while (k < l && n[l] == n[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};
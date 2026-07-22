class Solution {
public:
    void prefix(vector<int>&nums, vector<int>&pre,vector<int>&suf ){
        int n=nums.size();
         pre[0]=1;
        for (int i=1; i<n; i++){
            pre[i]=pre[i-1]* nums[i-1];

        }
        suf[n-1]=1;
        for(int i=n-2;i>=0 ;i--){
            suf[i]=suf[i+1]*nums[i+1];
            

        }      

    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>prefixarr(n);
        vector<int>suffixarr(n);
        vector<int>ans(n);

        prefix(nums, prefixarr, suffixarr);

        for(int i=0; i<n ; i++){
            ans[i]=prefixarr[i]*suffixarr[i];
        }
        return ans;
        
    }
};
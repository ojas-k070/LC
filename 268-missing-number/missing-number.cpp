class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actualsum=n*(n+1)/2;

        int sum=0;
        for ( int n: nums){
            sum+=n;
        }

        return(actualsum-sum);
        
        
    }
};
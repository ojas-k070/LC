class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int totalsum=0;
        int n=nums.size();

        for (int i=0; i<n; i++){
            unordered_set<int>disele;
            for(int j=i;j<n;j++){
                disele.insert(nums[j]);
                int count=disele.size();
               totalsum+=count*count;
            }
        }
        return totalsum;
    }
};
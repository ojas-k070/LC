class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int ed=st+1;
        while(ed<n){
            if(nums[st]==0){
                if(nums[ed]!=0){
                    swap(nums[st],nums[ed]);
                    st++;

                }
                ed++;
                
            }
            else{
                st++;
                if(st>=ed){
                    ed=st+1;
                }
            }
        }
        
    }
};
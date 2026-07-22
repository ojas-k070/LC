class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high= nums.size()-1;
        while(low<high){ 
            int mid =low + (high-low)/2;
            if(mid % 2==0){
                
                if(mid > 0 && nums[mid-1]==nums[mid]){ 
                    high=mid-2; 
                }else{
                    low=mid;
                }
            }
            else{
                if(nums[mid-1]==nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return nums[low]; // 4. Added the missing return statement
    }
};

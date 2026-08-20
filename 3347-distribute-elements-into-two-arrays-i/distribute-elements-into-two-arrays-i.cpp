class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n= nums.size();
        int s=100;
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for( int j=2; j<n ;j++ ){
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1]){
                arr1.push_back(nums[j]);
            }
            else{
                arr2.push_back(nums[j]);
            }
        }
        ans.reserve(arr1.size()+arr2.size());
        ans.insert(ans.end(), arr1.begin(),   arr1.end());
        ans.insert(ans.end(), arr2.begin(),   arr2.end());


        return ans;
    }
};
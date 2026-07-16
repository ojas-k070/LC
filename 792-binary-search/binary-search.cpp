class Solution {
public:

    int binarysearch(vector<int>&arr,int tar,int start,int end){
        if(start>end){
            return -1;
        }
        int mid= (start+end)/2;
        
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]<tar){
            return binarysearch(arr,tar,start+1,end);
        }
        else{
           return binarysearch(arr,tar, start,mid-1);
        }

    }
    int search(vector<int>& nums, int target) {
        return binarysearch(nums,target,0,nums.size()-1);
        
    }
};
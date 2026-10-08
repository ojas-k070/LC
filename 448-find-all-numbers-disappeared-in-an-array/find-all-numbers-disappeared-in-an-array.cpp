class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;

        for(int number : nums){
            m[number]++;
        }

        for( int i=1; i<=nums.size(); ++i){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
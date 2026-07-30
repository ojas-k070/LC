class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current =0;
        int highest =current;
        for(int altig : gain){
            current =current +altig;
            highest=max(highest,current);
            
        }
        return highest;
    }
};
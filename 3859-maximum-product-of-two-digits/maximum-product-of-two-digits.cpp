class Solution {
public:

    int maxProduct(int n) {
        vector<int>digits;

        while(n!=0){
            int d;
            d=n%10;
            digits.push_back(d);
            n=n/10;
        }
        int max1=INT_MIN;
        int max2=INT_MIN;

        for(int d : digits){
            if(d>max1){
                max2=max1;
                max1=d;
            }
            else if(d>max2){
                max2=d;
            }
        }
        return(max1*max2);
        
    }
};
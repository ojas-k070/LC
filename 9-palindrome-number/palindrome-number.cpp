class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        if(x<0){
            return false;
        }
        long long reversenum=0;
        while(x>0){
        
        int ld=x%10;
         reversenum=(reversenum * 10)+ld;
          x=x/10;

        }
        return (original==reversenum);
        
        
    }
};
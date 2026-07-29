class Solution {
public:
    bool detectCapitalUse(string n) {
        int capt=0;
        for(int i=0;i<n.size(); i++){
            if(isupper(n[i])){
                capt++;
            }
        }
        if(capt==n.size()|| capt==0 || capt==1 && isupper(n[0])){
            return true;
        }
        else 
        return false;
    }
};
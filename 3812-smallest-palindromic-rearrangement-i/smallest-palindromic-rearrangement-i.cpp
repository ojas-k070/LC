class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int half=n/2;
        string fh=s.substr(0,half);
        sort(fh.begin(),fh.end());
        string sh= fh;
        reverse(sh.begin(),sh.end());
        if(n%2==0){
            return fh+sh;
        }
        else{
            return fh+s[half]+sh;
        }

        
    }
};
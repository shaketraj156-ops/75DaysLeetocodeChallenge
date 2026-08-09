class Solution {
public:
    bool isPalindrome(int x) {
        int last = 0;
        long long rev = 0;
        int ol = x;
        if(x<0){
            return false;
        }
        while(x>0){
            last = x%10;
            rev = rev*10 + last;
            x = x/10;
        }
        if(rev == ol){
            return true;
        }
        else{
            return false;
        }
    }
};
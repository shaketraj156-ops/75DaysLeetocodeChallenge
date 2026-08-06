class Solution {
public:
    int climbStairs(int n) {
               if(n<4){
            return n;
        }
        int stepn = 0;
        int step1 = 1;
        int step2 = 2;
        int step3 = 3;
        for(int i = 4; i<=n; i++){
           stepn = step2 + step3;
           step2 = step3;
           step3 = stepn;
        }
        return stepn; 
    }
};
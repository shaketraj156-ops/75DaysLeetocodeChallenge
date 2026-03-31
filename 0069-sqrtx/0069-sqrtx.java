class Solution {
    public int mySqrt(int n) {
        int root = -1;
       for(int i =0; i<=n; i++){
        if((long)i*i>n) break;
        root = i;
       }
       return root;
    }
}
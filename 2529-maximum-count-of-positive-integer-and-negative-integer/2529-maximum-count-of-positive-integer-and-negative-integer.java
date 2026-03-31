class Solution {
    public int maximumCount(int[] arr) {
        int n = arr.length;
        int lo = 0;
        int hi = n-1;
        int po = 0;
        int ne = 0;
       for(int i = 0 ; i<n; i++){
        if(arr[i]<0){
            ne++;
        }
        else if (arr[i]>0) po++;
       }
       return Math.max(po,ne);
    }
}
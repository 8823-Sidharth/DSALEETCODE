class Solution {
public:
    bool isPowerOfTwo(int n) {
        //brute
        // if(n<=0) return false;
        // while(n%2==0){
        //     n/=2;
        // }
        // return n==1;

        //bit manipulation
        return n>0 && (n&(n-1))==0;
    }
};
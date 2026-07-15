class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        if(n%2==0){
            sumeven+=n;
        }
        if(n%2==1){
            sumodd+=n;
        }
        int m = gcd(sumeven,sumodd);
        return m;
    }
};
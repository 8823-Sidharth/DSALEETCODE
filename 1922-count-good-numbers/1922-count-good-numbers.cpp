class Solution {
public:
    const long long mod = 1000000007;
    long long power(long long a,long long b){
        long long res = 1;
        while(b>0){
            if(b%2==1){
                res = (res*a)%mod;
            }
            a = (a*a)%mod;
            b/=2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long even = n-(n/2);
        long long odd = n/2;
        return (power(5,even)*power(4,odd))%mod;
    }
};
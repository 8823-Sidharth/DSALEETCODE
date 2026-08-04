class Solution {
public:
    int reverseBits(int n) {
    //     string binary="";
    //     for(int i=0;i<32;i++){
    //         binary.push_back((n%2)+'0');
    //         n=n/2;
    //    }
    //     int decimal=0;
    //     for(int i=0;i<binary.length();i++){
    //         int digit = binary[i]-'0';
    //         decimal= decimal*2+digit;
    //     }
    //     return decimal;
        unsigned int ans=0;
        for(int i=0;i<32;i++){
            ans=ans<<1; //shift answer left
            ans|=(n&1); //copy last bit of n
            n=n>>1; // remove last bit from n
        }
        return ans;
    }
};
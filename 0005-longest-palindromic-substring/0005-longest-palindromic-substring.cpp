class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            check(s,i,i,start,maxlen);
            check(s,i,i+1,start,maxlen);
        }
        return s.substr(start,maxlen);
    }
     void check(string &s,int left,int right,int &start,int &maxlen){
        while(left >= 0 && right < s.size()&& s[left] == s[right]){
            int len=right-left+1;
            if(len>maxlen){
                maxlen=len;
                start=left;
            }
            left--;
            right++;
        }       
    }
};
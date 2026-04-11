class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n&&s[i]==' ') i++;
        int sign=1;
        if(i<n&&(s[i]=='-'||s[i]=='+')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        long res=0;
        while(i<n&&isdigit(s[i])){
            int d=s[i]-'0';
            if(res*10+d>INT_MAX){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            res=res*10+d;
            i++;
        }
        return sign*res;
    }
};
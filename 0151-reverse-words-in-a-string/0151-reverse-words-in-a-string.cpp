class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int start=0;
        int i=0;
        string result="";
        while(i<n){
            while(i<n&&s[i]==' ') i++;
            if(i>=n) break;
            start=i;
            while(i<n&&s[i]!=' ')i++;
            reverse(s.begin()+start,s.begin()+i);
            result+=s.substr(start,i-start)+" ";
        }
        if(!result.empty()) result.pop_back();
        return result;
    }
};
class Solution {
public:
    int minAddToMakeValid(string s) {
        int p=0;
        int a=0;
        for(char c:s){
            if(c=='('){
                p++;
            }
            else{
                if(p>0){
                    p--;
                }
                else{
                    a++;
                }
            }
        }
        return a+p;
    }
};
class Solution {
public:
    void solve(int index,string &digits,vector<string>& mapping,string &temp,vector<string>& ans){
        if(index == digits.size()){
            ans.push_back(temp);
            return ;
        }
        string letters = mapping[digits[index]-'0'];
        for(char ch:letters){
            temp.push_back(ch);
            solve(index+1,digits,mapping,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()){
            return ans;
        }
        vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        solve(0,digits,mapping,temp,ans);
        return ans;
    }
};
class Solution {
public:
    void solve(int num,int k,int target,vector<int>& temp,vector<vector<int>>& ans){
        if(temp.size()==k){
            if(target==0)
                ans.push_back(temp);
            return;
        }
        if(num>9)
            return;
        temp.push_back(num);
        solve(num+1,k,target-num,temp,ans);
        temp.pop_back();
        solve(num+1,k,target,temp,ans);
            
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(1,k,n,temp,ans);
        return ans;
    }
};
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int a = INT_MAX;
        int b = INT_MIN;
        unordered_set<int> st;
        for(int x:nums){
            a=min(a,x);
            b=max(b,x);
            st.insert(x);
        }
        vector<int> ans;
        for(int i=a+1;i<b;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }    
        }
        return ans;
    }
};
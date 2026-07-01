class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans=0;
        int start;
        int ansstart=-1;
        int ansend=-1;
        for(int i=0;i<nums.size();i++){
            if(ans==0) start=i;
            ans+= nums[i];
            if(ans>maxi){
                maxi=ans;
                ansstart=start;
                ansend=i;
            }
            if(ans<0){
                ans=0;
            }
        }
        return maxi;
    }
};
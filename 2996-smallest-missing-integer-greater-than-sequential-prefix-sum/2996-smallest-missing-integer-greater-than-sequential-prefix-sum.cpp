class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        while(find(temp.begin(),temp.end(),sum)!=temp.end()){
            sum++;
        }
        return sum;
    }
};
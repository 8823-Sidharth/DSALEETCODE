class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            int left=INT_MAX;
            int right=INT_MAX;
            if(i>0) left= nums[i-1];
            if(i<n-1) right=nums[i+1];
            int mini=min(left,right);
            if(i%2==0){
                if(nums[i]>=mini) even+= nums[i]-(mini-1);
            }
            else{
                if(nums[i]>=mini) odd+= nums[i]-(mini-1);
            }
        }
        return min(even,odd);
    }
};
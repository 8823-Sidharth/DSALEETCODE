class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        // sort(nums.begin(),nums.end());
        // return (nums[n-1]-1)*(nums[n-2]-1);
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>max1){
            max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2){
            max2=nums[i];
        }
    }
    return (max1-1)*(max2-1);
    }
};
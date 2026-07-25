class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while(n>0){
            int digit=n%10;
            nums.push_back(digit);
            n=n/10;
        }
        sort(nums.begin(),nums.end());
        int m=nums.size();
        return nums[m-1]*nums[m-2];
    }     
};

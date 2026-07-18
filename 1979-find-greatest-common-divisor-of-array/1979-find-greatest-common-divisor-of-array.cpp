class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m;
        for(int i=0;i<n;i++){
            m = gcd(nums[0],nums[n-1]);
        }
        return m;
    }
};
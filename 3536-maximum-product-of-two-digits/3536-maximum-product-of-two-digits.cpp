class Solution {
public:
    int maxProduct(int n) {
        // vector<int> nums;
        // while(n>0){
        //     int digit=n%10;
        //     nums.push_back(digit);
        //     n=n/10;
        // }
        // sort(nums.begin(),nums.end());
        // int m=nums.size();
        // return nums[m-1]*nums[m-2];
        int max1=INT_MIN;
        int max2=INT_MIN;
        while(n>0){
            int m1=n%10;
            if(m1>max1){
                max2=max1;
                max1=m1;
            }
            else if(m1>max2){
                max2=m1;
            }
            n=n/10;
        }
        return max1*max2;
    }     
};

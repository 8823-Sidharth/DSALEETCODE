class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums3;
        int m=nums1.size();
        int n=nums2.size();
        int o=m+n;
        for(int i=0;i<m;i++){
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            nums3.push_back(nums2[i]);
        }
        sort(nums3.begin(),nums3.end());
        if(o%2==1){
            return nums3[o/2];
        }
        else{
            return (nums3[o/2-1]+nums3[o/2])/2.0;
        }
    }
};
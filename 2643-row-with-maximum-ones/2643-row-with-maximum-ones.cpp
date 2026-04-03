class Solution {
public:
    int lowerbound(vector <int> &arr,int n,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int cnt_max=0;
        int index=-1;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            // int cnt_ones=n-lowerbound(mat[i],n,1);
            int cnt_ones=0;
            for(int j=0;j<n;j++){
                cnt_ones+=mat[i][j];
            }
            if(cnt_ones>cnt_max||index==-1){
                cnt_max=cnt_ones;
                index=i;
            }
        }
        return {index,cnt_max};
    }
};
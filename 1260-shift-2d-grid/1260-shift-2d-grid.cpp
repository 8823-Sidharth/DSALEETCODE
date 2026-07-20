class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        // while(k--){
        //     vector<vector<int>> temp(m,vector<int> (n));
        //     for(int i=0;i<n;i++){
        //         for(int j=0;j<m;j++){
        //             if(i==m-1 && j==n-1){
        //                 temp[0][0]=grid[i][j];
        //             }
        //             else if(j==n-1){
        //                 temp[i+1][0]=grid[i][j];
        //             }
        //             else{
        //                 temp[i][j+1]=grid[i][j];
        //             }
        //         }
        //     }
        //     grid=temp;
        // }
        // return grid;
        int total=m*n;
        k=k%total;
        vector<vector<int>> temp(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int currindex = i*n+j;
                int newindex = (currindex+k)%total;
                int newrow = newindex / n;
                int newcol = newindex % n;
                temp[newrow][newcol]=grid[i][j];
            }
        }
    return temp;
    }    
};
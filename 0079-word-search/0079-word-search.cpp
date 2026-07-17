class Solution {
public:
    bool search(int i,int j,int m,int n,vector<vector<char>>& board, string &word,int k){
        
        if(i<0||j<0||i==m||j==n) return false;
        if(board[i][j]!=word[k]) return false;
        if(k == word.size()-1) return true;
        char temp = board[i][j];
        board[i][j] = '#';
        bool op1 = search(i+1,j,m,n,board,word,k+1);
        bool op2 = search(i-1,j,m,n,board,word,k+1);
        bool op3 = search(i,j+1,m,n,board,word,k+1);
        bool op4 = search(i,j-1,m,n,board,word,k+1);
        board[i][j] = temp;
        return op1||op2||op3||op4 ;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        for(int i=0;i<m;i++){
            int n = board[i].size();
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0]){
                    if(search(i,j,m,n,board,word,0)) return true ;
                }
            }
        }
        return false;
    }
};
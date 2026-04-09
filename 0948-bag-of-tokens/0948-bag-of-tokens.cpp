class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int maxscore=0;
        int left=0;
        int right=tokens.size()-1;
        while(left<=right){
            if(tokens[left]<=power){
                power-=tokens[left];
                score++;
                maxscore=max(score,maxscore);
                left++;
            }
            else if(score>0){
                power+=tokens[right];
                score--;
                right--;
            }
            else{
                break;
            }
        }
        return maxscore;
    }
};
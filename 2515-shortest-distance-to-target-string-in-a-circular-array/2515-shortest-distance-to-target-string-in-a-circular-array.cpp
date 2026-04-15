class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int ans= n;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int d=abs(i-startIndex);
                ans=min(ans,min(d,n-d));
            }
        }
        if(ans==n) return -1;
        return ans;
    }
};
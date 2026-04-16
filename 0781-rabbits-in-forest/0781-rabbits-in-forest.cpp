class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> freq;
        for(int a:answers){
            freq[a]++;
        }
        int ans=0;
        for(auto m:freq){
            int x=m.first;
            int count=m.second;
            int group= x+1;
            while(count>0){
                ans+=group;
                count-=group;
            }
        }
        return ans;
    }
};
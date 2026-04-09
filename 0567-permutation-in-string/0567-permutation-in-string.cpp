class Solution {
public:
    bool freqissame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        int winsize=s1.size();
        for(int i=0;i<s2.size();i++){
            int winfreq[26]={0};
            int idx=i;
            int winidx=0;
            while(winidx<winsize&&idx<s2.size()){
                winfreq[s2[idx]-'a']++;
                winidx++;
                idx++;
            }
            if(freqissame(freq,winfreq)){
                return true;
            }
        }   
        return false;
    }
};
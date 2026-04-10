class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> freqs;
        map<char,int> freqt;
        for(char ch:s){
            freqs[ch]++;
        }
        for(char ch:t){
            freqt[ch]++;
        }
        if(freqs==freqt) return true;
        return false;
    }
};
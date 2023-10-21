// Longest Repeating Character Replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> mp;
        int i=0, mxFreq=0, mx=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            mxFreq=max(mxFreq, mp[s[j]]);
            while((j-i+1)-mxFreq > k){
                mp[s[i]]--;
                i++;
            }
            mx=max(mx,j-i+1);
        }
        return mx;
    }
};
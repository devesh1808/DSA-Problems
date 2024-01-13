int minSteps(string s, string t) {
        vector<int> freq(26, 0);
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:t){
            if(freq[c-'a']==0) continue;
            else freq[c-'a']--;
        }
        int cnt = 0;
        for(int i=0; i<26; i++){
            cnt += freq[i];
        }
        return cnt;
    }
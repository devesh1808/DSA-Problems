int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        for(char c:chars) mp[c]++;
        int ans = 0;
        for(string s:words){
            unordered_map<char, int> mp2;
            for(char c:s) mp2[c]++;
            bool flag = false;
            for(auto it:mp2){
                if(mp.find(it.first)==mp.end()){
                    flag = true;
                    break;
                }
                else if(mp.find(it.first)!=mp.end()){
                    if(it.second>mp[it.first]){
                        flag = true;
                        break;
                    }
                }
            }
            if(flag == false) ans+=s.length();
        }
        return ans;
    }
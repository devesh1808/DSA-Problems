int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, vector<int>> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]].push_back(i);
        }
        int ans = INT_MIN;
        for(auto it:mp){
            vector<int> v = it.second;
            if(v.size()>1){
                ans = max(ans, v[v.size()-1]-v[0]-1);
            }
        }
        return ans==INT_MIN? -1 : ans;
    }
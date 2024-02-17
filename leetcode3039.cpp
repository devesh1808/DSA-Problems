 string lastNonEmptyString(string s) {
        int n = s.length();
        unordered_map<char, vector<int>> mp;
        for(int i=n-1; i>=0; i--){
            mp[s[i]].push_back(i);
        }
        int mx = 0;
        for(auto it:mp){
            if(it.second.size()>mx) mx = it.second.size();
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto it:mp){
            vector<int> v = it.second;
            if(v.size()==mx) pq.push(v[0]);
        }
            string ans;
            while(!pq.empty()){
                ans += s[pq.top()];
                pq.pop();
            }
            return ans;
    }
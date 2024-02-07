string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c:s) mp[c]++;
        priority_queue<pair<int, char>> pq;
        for(auto it:mp) pq.push({it.second, it.first});
        string ans;
        while(!pq.empty()){
            int n = pq.top().first;
            char c = pq.top(). second;
            pq.pop();
            for(int i=0; i<n; i++) ans += c;
        }
        return ans;
    }
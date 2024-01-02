vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto it:nums) mp[it]++;
        for(auto it:mp) pq.push({it.second,it.first});
        int rowSz=pq.top().first;
        vector<vector<int>>v(rowSz);
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            int row=top.first;
            for(int i=0;i<row;i++){
                v[i].push_back(top.second);
            }
        }
        return v;
    }
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[grid[i][j]]++;
            }
        }
        int val1 = 0, val2 = 0;
        for(int i=1; i<=n*n; i++){
            if(mp.find(i)==mp.end()) val1 = i;
            if(mp[i]==2) val2 = i;
        }
        return {val2, val1};
    }
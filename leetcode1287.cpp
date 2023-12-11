int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int cnt = n/4;
        unordered_map<int, int> mp;
        for(int ele:arr) mp[ele]++;
        for(auto it:mp){
            if(it.second>cnt) return it.first;
        }
        return -1;
    }
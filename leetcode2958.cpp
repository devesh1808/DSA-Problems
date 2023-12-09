unordered_map<int, int> mp;
        int i = 0, j = 0, n = nums.size();
        int len = 0, mx = 0;
        while(j<n){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
                len--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                mx = max(mx, len);
            }
            len++;
            j++;
            mx = max(mx, len);
        }
        return mx;
vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int sum = 0;
        for(int ele:nums) sum += ele;
        int pref = 0, suff = 0;
        for(int i=0; i<n; i++){
            if(i>0) pref += nums[i-1];
            suff = sum-pref-nums[i];
            ans[i] = ((i*nums[i])-pref + (suff-((n-i-1)*nums[i])));
        }
        return ans;
    }
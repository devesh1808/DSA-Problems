vector<vector<int>> dp;
    int func(int i, vector<int> &nums, int n, int prev){
        if(i>=n) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int pick = 0, notPick = 0;
        if(prev==-1 || nums[i]>nums[prev]) pick = 1 + func(i+1, nums, n, i);
        notPick = func(i+1, nums, n, prev);
        return dp[i][prev+1] = max(pick, notPick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1, vector<int>(n+1, -1));
        return func(0, nums, nums.size(), -1);
    }
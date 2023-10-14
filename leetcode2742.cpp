class Solution {
public:
    vector<vector<int>>dp;
    
    int func(int i, vector<int> &c, vector<int> &t, int wallsRem, int n){
        if(wallsRem<=0) return 0;
        if(i>=n) return 1e9;
        if(dp[i][wallsRem]!=-1) return dp[i][wallsRem];
        int pick = 0, notPick=0;
        pick = c[i] + func(i+1, c, t, wallsRem-1-t[i], n);
        notPick = func(i+1, c, t, wallsRem, n);
        return dp[i][wallsRem] = min(pick, notPick);
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        dp.resize(n+1, vector<int>(n+1, -1));
        return func(0, cost, time, n, n);
    }
};
//Leetcode POTD - 15th Oct 2023 - Number of Ways to Stay in the Same Place After Some Steps

class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<vector<int>> dp;
    
    long long func(int i, int s, int n){
        if(s==0){
            return i==0 ? 1 : 0;
        }
        if(i<0 || i>=n || i>s) return 0;
        if(dp[i][s]!=-1) return dp[i][s];
        return dp[i][s] = (func(i, s-1, n)%MOD + func(i-1, s-1, n)%MOD + func(i+1, s-1, n)%MOD)%MOD;
    }
    int numWays(int steps, int arrLen) {
        dp.resize((steps/2)+1, vector<int>(steps+1, -1));
        return (int)func(0, steps, arrLen) % MOD;
    }
};
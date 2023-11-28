

const int MOD = 1e9 + 7;
    
    long dp[5][4][5001];
    
    long func(int i, int j, int cnt, int n){
        if(i<0 || i>=4 || j<0 || j>=3 || (i==3 && j==0) || (i==3 && j==2)) return 0;
        if(cnt==n-1){
            return 1;
        }
        if(dp[i][j][cnt]!=-1) return dp[i][j][cnt];
        long ans = 0;
        ans += func(i+2, j-1, cnt+1, n)%MOD;
        ans += func(i+2, j+1, cnt+1, n)%MOD;
        ans += func(i-2, j-1, cnt+1, n)%MOD;
        ans += func(i-2, j+1, cnt+1, n)%MOD;
        ans += func(i+1, j-2, cnt+1, n)%MOD;
        ans += func(i-1, j-2, cnt+1, n)%MOD;
        ans += func(i+1, j+2, cnt+1, n)%MOD;
        ans += func(i-1, j+2, cnt+1, n)%MOD;
        return dp[i][j][cnt] = ans;
    }
    
    int knightDialer(int n) {
        memset(dp, -1, sizeof(dp));
        long ans = 0;
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                ans = (ans+func(i, j, 0, n))%MOD;
            }
        }
        return (int)ans;
    }
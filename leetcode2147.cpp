const long long mod=1e9+7;
    int dp[100001][3];
    int recur(string &cor,int idx,int seats)
    {
        //Base Cases
        if(seats>2)
            return 0;
        
        //Limiting Case
        if(idx>=cor.size())
        {
            return seats==2;
            
        }
        
        // Memoization 
        if(dp[idx][seats]!=-1)
            return dp[idx][seats]%mod;
        
        
        // I don't Partition Here and move forward
        int op1=recur(cor,idx+1,seats+(cor[idx]=='S'));
        
        
        // I partition only if my Seat count is exactly = 2 and
        // add the result to previous count
        if(seats==2)
            op1=(op1+(recur(cor,idx,0)))%mod;
        
        
        return dp[idx][seats]=op1%mod;
        
        
        
    }
    int numberOfWays(string corridor) {
        
        memset(dp,-1,sizeof dp);
        return recur(corridor,0,0)%mod;
    }
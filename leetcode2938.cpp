long long minimumSteps(string s) {
        long long cnt = 0, ans = 0;
        for(char c:s){
            if(c=='1') cnt++;
            else ans += cnt;
        }
        return ans;
    }
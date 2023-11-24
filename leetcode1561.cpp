  int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int val = piles.size()/3;
        int i = 0;
        int ans = 0;
        int j = piles.size()-2;
        while(i<val){
            ans += piles[j];
            j-=2;
            i++;
        }
        return ans;
    }
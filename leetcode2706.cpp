int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int cnt = 0;
        int i = 0;
        int temp = money;
        while(cnt < 2){
            temp -= prices[i];
            i++;
            cnt++;
        }
        return temp<0?money:temp;
    }
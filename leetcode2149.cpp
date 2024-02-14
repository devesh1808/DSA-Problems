vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int pos = 0, neg = 1;
        for(int ele:nums){
            if(ele<0) ans[neg] = ele, neg+=2;
            else ans[pos] = ele, pos+=2;
        }
        return ans;
    }
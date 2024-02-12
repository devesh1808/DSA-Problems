int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int num = -1, cnt = 0;
        for(int ele:nums){
            if(ele==num) cnt++;
            else if(cnt==0) num=ele, cnt=1;
            else cnt--;
        }
        return num;
    }
int maxProduct(vector<int>& nums) {
        int mx = INT_MIN, secMx = INT_MIN;
        for(int ele:nums){
            if(ele>mx){
                secMx = mx;
                mx = ele;
            }
            else if(ele>secMx){
                secMx = ele;
            }
        }
        return (mx-1)*(secMx-1);
    }
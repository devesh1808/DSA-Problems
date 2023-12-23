long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long sum = 0;
        vector<long long> v(nums.size());
        v[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-1; i>0; i--){
            v[i-1] = v[i] + nums[i-1];
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<v[i+1] && nums.size()-i>=3) return v[i];
        }
        return -1;
    }
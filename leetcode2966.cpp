vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = 2;
        vector<vector<int>> ans;
        bool flag = true;
        while(j<n){
            if(nums[j]-nums[i]>k){
                flag = false;
                break;
            }
            else{
                vector<int> temp;
                for(int k=i; k<=j; k++){
                    temp.push_back(nums[k]);
                }
                ans.push_back(temp);
                i+=3;
                j+=3;
            }
        }
        vector<vector<int>> v;
        return flag == false ? v : ans;
    }
//program to count the subarrays that sums to k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int cnt = 0, sum = 0;
        for(int ele:nums){
            sum += ele;
            if(mp.find(sum-k)!=mp.end()){
                cnt += mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
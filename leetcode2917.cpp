//Find the K-or of an Array

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int result = 0;
    int n = nums.size();
    
    for (int i = 0; i < 31; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if ((nums[j] >> i) & 1) {
                count++;
            }
        }
        
        if (count >= k) {
            result |= (1 << i);
        }
    }
    
    return result;
    }
};
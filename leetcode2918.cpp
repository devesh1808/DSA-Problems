// Minimum Equal Sum of Two Arrays After Replacing Zeros

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0, sum2=0;
        int zero1=0, zero2=0;
        for(auto it:nums1){
            sum1+=it;
            if(it==0) zero1++;
        }
        for(auto it:nums2){
            sum2+=it;
            if(it==0) zero2++;
        }
        if(zero2==0){
            if(sum1>sum2 || abs(sum2-sum1)<zero1) return -1;
        }
        if(zero1==0){
            if(sum2>sum1 || abs(sum1-sum2)<zero2) return -1;
        }
        long long val1 = sum1 + 1*zero1;
        long long val2 = sum2 + 1*zero2;
        return max(val1, val2);
    }
};
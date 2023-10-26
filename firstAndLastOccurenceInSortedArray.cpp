// Find First and Last Position of Element in Sorted Array

class Solution {
public:
    int func1(vector<int> &nums,int n,int target){
        int l=0, h=n-1, ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                ans=m;
                h=m-1;
            }
            else if(nums[m]<target) l=m+1;
            else h=m-1;
        }
        return ans;
    }
    int func2(vector<int> &nums,int n,int target){
        int l=0, h=n-1, ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                ans=m;
                l=m+1;
            }
            else if(nums[m]<target) l=m+1;
            else h=m-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=0, second=0;
        first=func1(nums,n,target);
        second=func2(nums,n,target);
        return {first, second};
    }
};
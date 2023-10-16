//Leetcode POTD: 16/10/2023

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex+1, 1);
        long ans = 1;
        for(int i=1; i<rowIndex; i++){
            ans = ans * ((rowIndex+1) - i);
            ans = ans / i;
            v[i] = ans;
        }
        return v;
    }
};
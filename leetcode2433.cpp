//  Find The Original Array of Prefix Xor

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> arr(n, 0);
        arr[0] = pref[0];
        int val = arr[0];
        for(int i=1; i<n; i++){
            arr[i] = pref[i] ^ val;
            val = val ^ arr[i];
        }
        return arr;
    }
};
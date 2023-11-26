// Matrix Similarity After Cyclic Shifts

void rightShift(vector<int> &v, int k){
        int n = v.size();
        k = k%n;
        reverse(v.begin(), v.begin()+k);
        reverse(v.begin()+k, v.end());
        reverse(v.begin(), v.end());
    }
    void leftShift(vector<int> &v, int k){
        int n = v.size();
        k = k%n;
        reverse(v.begin(), v.begin()+n-k);
        reverse(v.begin()+n-k, v.end());
        reverse(v.begin(), v.end());
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> arr = mat;
        int m = arr.size(), n = arr[0].size();
        for(int i=0; i<m; i++){
            if(i%2==0){
                leftShift(arr[i], k);
            }
            else rightShift(arr[i], k);
        }
        return mat == arr;
    }
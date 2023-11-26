// Largest Submatrix With Rearrangements

int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[j][i]==0) matrix[j][i] = 0;
                else matrix[j][i] += matrix[j-1][i];
            }
        }
        int ans = INT_MIN;
        for(int i=0; i<m; i++){
            sort(matrix[i].begin(), matrix[i].end());
            reverse(matrix[i].begin(), matrix[i].end());
            for(int j=0; j<n; j++){
                ans = max(ans, matrix[i][j]*(j+1));
            }
        }
        return ans;
    }
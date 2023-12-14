int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int cnt = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==1){
                    bool flag = true;
                    for(int k=j-1; k>=0; k--){
                        if(mat[i][k]==1){
                            flag = false;
                            break;
                        }
                    }
                    for(int k=j+1; k<n; k++){
                        if(mat[i][k]==1){
                            flag = false;
                            break;
                        }
                    }
                    for(int k=i-1; k>=0; k--){
                        if(mat[k][j]==1){
                            flag = false;
                            break;
                        }
                    }
                    for(int k=i+1; k<m; k++){
                        if(mat[k][j]==1){
                            flag = false;
                            break;
                        }
                    }
                    if(flag==true) cnt++;
                    flag = true;
                }
            }
        }
        return cnt;
    }
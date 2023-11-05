// Find the Winner of an Array Game

int getWinner(vector<int>& arr, int k) {
        if(arr.size()==2) return max(arr[0], arr[1]);
        if(arr.size()<=k) return *max_element(arr.begin(), arr.end());
        int mx = arr[0], cnt = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>mx){
                cnt = 0;
                mx = arr[i];
            }
            cnt++;
            if(cnt==k) return mx;
        }
        return mx;
    }
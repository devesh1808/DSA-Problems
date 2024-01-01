int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cnt = 0;
        int m = g.size(), n = s.size();
        int i = 0, j = 0;
        while(i<m && j<n){
            if(s[j]>=g[i]){
                cnt++;
                i++, j++;
            }
            else if(s[j]<g[i]) j++;
        }
        return cnt;
    }
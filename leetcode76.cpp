string minWindow(string s, string t) {
        int m=s.length(), n=t.length();
        unordered_map<char,int>mp;
        for(char c:t) mp[c]++;
        int len=INT_MAX, i=0, cnt=mp.size(), start=0;
        for(int j=0;j<m;j++){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) cnt--;
            }
            while(cnt==0){
                if(j-i+1<len){
                    len=j-i+1;
                    start=i;
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0) cnt++;
                }
                i++;
            }
        }
        return len==INT_MAX?"":s.substr(start,len);
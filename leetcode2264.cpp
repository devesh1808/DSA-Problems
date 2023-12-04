string largestGoodInteger(string num) {
        string ans;
        for(int i=2; i<num.length(); i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                if(ans=="") ans = num.substr(i-2, 3);
                else{
                    if(num[i]>ans[0]) ans = num.substr(i-2, 3);
                }
            }
        }
        return ans;
    }
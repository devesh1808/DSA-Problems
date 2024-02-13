    bool isPalindrome(string s){
        int n = s.length();
        int i = 0, j = n-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            else i++, j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(isPalindrome(s)) return s;
        }
        return "";
    }
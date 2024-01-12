bool halvesAreAlike(string s) {
        string a, b;
        int n = s.length();
        a = s.substr(0, n/2);
        b = s.substr(n/2, n/2);
        unordered_set<char> mp;
        mp.insert('a');
        mp.insert('A');
        mp.insert('e');
        mp.insert('E');
        mp.insert('I');
        mp.insert('i');
        mp.insert('o');
        mp.insert('O');
        mp.insert('u');
        mp.insert('U');
        int cnt1 = 0, cnt2 = 0;
        for(char c:a){
            if(mp.find(c)!=mp.end()) cnt1++;
        }
        for(char c:b){
            if(mp.find(c)!=mp.end()) cnt2++;
        }
        return cnt1==cnt2;
    }
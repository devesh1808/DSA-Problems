// Count Beautiful Substrings I

int beautifulSubstrings(string s, int k) {
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        int ans = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            string str = "";
            int a = 0, b = 0;
            for(int j=i; j<n; j++){
                str += s[j];
                if(st.find(s[j])!=st.end()) a++;
                else b++;
                if(a==b && (a*b)%k==0) ans++;
            }
        }
        return ans;
    }
// Leetcode POTD : (19/10/2023) Backspace String Compare


//using stack
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st1, st2;
        for(char c:s){
            if(c!='#') st1.push(c);
            else if(c=='#' && !st1.empty()) st1.pop();
        }
        for(char c:t){
            if(c!='#') st2.push(c);
            else if(c=='#' && !st2.empty()) st2.pop();
        }
        string s1, s2;
        while(!st1.empty()){
            s1 += st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            s2 += st2.top();
            st2.pop();
        }
        return s1==s2;
    }
};


// Using 2 pointers

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length(), m = t.length();
        int p1 = 0, p2 = 0;
        for(int i=0; i<n; i++){
            if(s[i]!='#'){
                s[p1++] = s[i];
            }
            else{
                if(p1>0) p1--;
            }
        }
        for(int i=0; i<m; i++){
            if(t[i]!='#'){
                t[p2++] = t[i];
            }
            else{
                if(p2>0) p2--;
            }
        }
        if(p1!=p2) return false;
        for(int i=0; i<p1; i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};
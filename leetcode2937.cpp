int findMinimumOperations(string s1, string s2, string s3) {
        int i = 0, j = 0, k = 0;
        while(i<s1.length() && j<s2.length() && k<s3.length()){
            if(s1[i]==s2[j]  && s2[j]==s3[k] && s3[k]==s1[i]){
                i++, j++, k++;
            }
            else break;
        }
        if(i==0 || j==0 || k==0) return -1;
        else return s1.length()-i + s2.length()-j + s3.length()-k;
    }
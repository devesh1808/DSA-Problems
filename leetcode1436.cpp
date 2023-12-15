string destCity(vector<vector<string>>& paths) {
        unordered_set<string> left, right;
        for(auto it:paths){
            string s1 = it[0], s2 = it[1];
            left.insert(s1);
            right.insert(s2);
        }
        for(auto it:right){
            if(left.find(it)==left.end()) return it;
        }
        return "";
}
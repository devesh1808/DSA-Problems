vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;
        for(int ele:nums1) s1.insert(ele);
        for(int ele:nums2) s2.insert(ele);
        int c1 = 0, c2 = 0;
        for(int ele:nums1){
            if(s2.find(ele)!=s2.end()) c1++;
        }
        for(int ele:nums2){
            if(s1.find(ele)!=s1.end()) c2++;
        }
        return {c1, c2};
    }
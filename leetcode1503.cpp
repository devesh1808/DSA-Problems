//Last Moment Before All Ants Fall Out of a Plank

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int leftMax = 0, rightMin = 0;
        if(left.size()>0) leftMax = *max_element(left.begin(), left.end());
        if(right.size()>0) rightMin = *min_element(right.begin(), right.end());
        if(left.size()==0) return n-rightMin;
        else if(right.size()==0) return leftMax;
        return (leftMax-rightMin) + max(rightMin, n-leftMax);
    }
};
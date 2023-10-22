// Maximum Points You Can Obtain from Cards(sliding window)

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
        int mx = sum;
        for(int i=k-1; i>=0; i--){
            sum-=cardPoints[i];
            sum+=cardPoints[(n-k)+i];
            mx =  max(mx, sum);
        }
        return mx;
    }
};
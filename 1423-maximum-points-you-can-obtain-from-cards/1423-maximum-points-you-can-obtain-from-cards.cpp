class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0,total = 0;
        for(int i=0;i<cardPoints.size();i++){
            total += cardPoints[i];
        }
        if(cardPoints.size() == k){
            return total;
        }
        int w = cardPoints.size() - k;
        for(int i=0;i<w;i++){
            sum += cardPoints[i];
        }
        int maxs = sum;
        for(int i = w;i<cardPoints.size();i++){
            sum = sum - cardPoints[i - w] + cardPoints[i];
            maxs = min(maxs,sum);
        }
        return total - maxs;
    }
};
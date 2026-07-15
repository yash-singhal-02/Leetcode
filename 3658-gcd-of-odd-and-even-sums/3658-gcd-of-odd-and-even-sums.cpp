class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumo = 0,sume = 0,oddsum = 1,evensum = 0,ans=0;
        for(int i=0;i<n;i++){
            oddsum += 2;
            sumo += oddsum;
        }
        for(int i=0;i<n;i++){
            evensum += 2;
            sume += evensum;
        }
        for(int i=1;i<=min(sumo,sume);i++){
            if(sumo % i== 0 && sume % i == 0){
                ans = i;
            }
        }
        return ans;
    }
};
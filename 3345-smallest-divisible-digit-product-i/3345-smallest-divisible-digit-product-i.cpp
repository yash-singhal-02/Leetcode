class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int j=n;;j++){
            int p =1;
            int i = j;
            while(i>0){
                p *= (i%10);
                i = i / 10;
            }
            if(p%t==0){
                return j;
            }
        }
    }
};
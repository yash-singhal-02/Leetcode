class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> vec;
        while(n>0){
            vec.push_back(n%10);
            n = n / 10;
        }
        reverse(vec.begin(),vec.end());
        long long x = 0;
        int sum = 0;
        for(int i=0;i<vec.size();i++){
            if(vec[i] != 0){
                x = x * 10 + vec[i];
                sum += vec[i];
            }
        }
        return x * sum;
    }
};
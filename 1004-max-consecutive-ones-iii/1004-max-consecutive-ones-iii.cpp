class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0,cnt = 0,maxlen = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                cnt++;
            }
            while(cnt > k){
                if(nums[j] == 0){
                    cnt--;
                }
                j++;
            }
            maxlen = max(maxlen,i - j + 1);
        }
        return maxlen;
    }
};
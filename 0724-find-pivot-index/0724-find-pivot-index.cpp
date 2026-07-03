class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int lf = 0;
        for(int i=0;i<nums.size();i++){
            int rs = sum - lf - nums[i];
            if(rs == lf){
                return i;
            }
            lf += nums[i];
        }
        return -1;
    }
};
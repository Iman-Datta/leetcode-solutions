class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int curr_sum = 0, n = nums.size();
        int acc_sum = n * (n + 1)/2;

        for(int i = 0; i < n; i++){
            curr_sum += nums[i];
        }

        return acc_sum - curr_sum;
    }
};
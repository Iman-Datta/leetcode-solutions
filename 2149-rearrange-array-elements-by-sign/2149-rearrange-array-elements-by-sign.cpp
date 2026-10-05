class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pIndx = 0, nIndx = 1;
        vector<int> ans(nums.size());

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans[pIndx] = nums[i];
                pIndx += 2;
            }
            else {
                ans[nIndx] = nums[i];
                nIndx += 2;
            }
        }
        return ans;
    }
};
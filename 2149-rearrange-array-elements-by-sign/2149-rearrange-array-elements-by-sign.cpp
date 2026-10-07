class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pIndx = 0;
        int nIndx = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans[pIndx] = nums[i];
                pIndx += 2;
            }
            else{
                ans[nIndx] = nums[i];
                nIndx += 2;
            }
        }
        return ans;
    }
};
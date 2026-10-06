class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, elCount = 0, el = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(count <= 0){
                count = 1;
                el = nums[i];
            }

            else if (el == nums[i]){
                count ++;
            }
            else count --;
        }

        for(int x : nums){
            if(x == el){
                elCount ++;
            }
        }

        if(elCount > n/2) return el;
        return -1;
    }
};
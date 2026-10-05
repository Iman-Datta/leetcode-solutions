class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> frq;

        for(int x : nums){
            frq[x] ++;
            if(frq[x] > nums.size()/2){
                return x;
            }
        }
        return -1;
    }
};
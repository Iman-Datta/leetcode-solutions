class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& vec) {
        int n = vec.size();
        int count = 0;
        int max_count = 0;

        for(int i = 0; i < n; i++){
            if(vec[i] == 1) {
                count ++;
                max_count = max(count,max_count);
            }
            else{
                count = 0;
            }
        }
        return max_count;
    }
};

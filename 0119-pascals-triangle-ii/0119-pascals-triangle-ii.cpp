class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long element = 1;
        ans.push_back(element);

        for(int i = 1; i < rowIndex + 1; i++){
            element = element * (rowIndex - i + 1);
            element = element / i;
            ans.push_back(element);
        }

        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            long long element = 1;

            for (int j = 0; j <= i; j++) {
                row.push_back(element);

                element = element * (i - j) / (j + 1);
            }

            ans.push_back(row);
        }

        return ans;
    }
};
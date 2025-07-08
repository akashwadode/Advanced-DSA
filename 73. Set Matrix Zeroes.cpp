class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> row(matrix.size(), true);
        vector<bool> column(matrix[0].size(), true);
        for (int i = 0; i < matrix.size(); i++) {
            if (row[i]) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i][j] == 0) {
                        row[i] = false;
                        column[j] = false;
                    }
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            if (!row[i]) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            } else {
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (!column[j]) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }
};

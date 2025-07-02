class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (!trust.size() && n < 2) {
            return 1;
        } else if (!trust.size() && n > 1) {
            return -1;
        }
        unordered_map<int, vector<int>> um;
        for (const auto& row : trust) {
            if (!um.count(row[0])) {
                um[row[0]] = {0, 0};
            }
            if (!um.count(row[1])) {
                um[row[1]] = {0, 0};
            }
            um[row[0]][0]++;
            um[row[1]][1]++;
        }
        for (const auto& pair : um) {
            if (pair.second[1] == n - 1 && pair.second[0] == 0) {
                return pair.first;
            }
        }
        return -1;
    }
};

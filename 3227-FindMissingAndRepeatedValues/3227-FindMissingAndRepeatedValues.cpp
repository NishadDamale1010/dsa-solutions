// Last updated: 6/26/2026, 1:41:48 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> freq;
        for (auto &row : grid) {
            for (int x : row)
                freq[x]++;
        }
        int duplicate = -1;
        int missing = -1;
        for (int i = 1; i <= n*n; i++) {
            if (freq[i] == 2)
                duplicate =i;
            if (freq[i] == 0)
                missing = i;
        }
        return {duplicate, missing};
    }
};
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<int> rMax (n, INT_MIN);
        vector<int> cMax (n, INT_MIN);
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                rMax[r] = max(rMax[r], grid[r][c]);
                cMax[c] = max(cMax[c], grid[r][c]);
            }
        }
        
        int res = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                res += min(rMax[r], cMax[c]) - grid[r][c];
            }
        }
        
        return res;
    }
};

class Solution {
public:
    int solve(int val, vector<int>tops, vector<int>bottoms){
        
        if(val == -1) return INT_MAX;
        int n = tops.size();
        int cnt1 = 0, cnt2 = 0;
        
        for(int i = 0; i<n; i++){
            if(tops[i] != val)
                cnt1++;
            if(bottoms[i] != val)
                cnt2++;
        }
        
        return min(cnt1, cnt2);
        
    }
    
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int val1 =tops[0], val2 = bottoms[0];
        int n = tops.size();
        
        for(int i = 1; i<n; i++){
            if(val1 != tops[i] && val1 != bottoms[i])
                val1 = -1;
            if(val2 != tops[i] && val2 != bottoms[i])
                val2 = -1;
        }
        
        int ans = min(solve(val1, tops, bottoms), solve(val2, tops, bottoms));
        
        return ans == INT_MAX ? -1 : ans;
    }
};

class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n, 'a');

        k = k - n;
        int j = n-1;
        
        while(k>0){
            int temp = min(k, 25);
            ans[j] += temp;
            k -= temp; 
            j--;
        }
        
        return ans;
    }
};

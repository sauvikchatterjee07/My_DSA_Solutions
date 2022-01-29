class Solution {
private: 
    int countspace(string s){
        
        int cnt = 1;
        for(auto i: s)
            if(i == ' ') cnt++;
        return cnt;
    }
    
    
    
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int res = 0;
        for(auto i: sentences){
            res = max(res, countspace(i));
        }
        return res;
    }
};

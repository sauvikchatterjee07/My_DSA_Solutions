class Solution {
private: 
    void transpose(vector<vector<int>> &v){
        for(int i = 0; i< v.size(); i++){
            for(int j = i; j<v.size(); j++)
                swap(v[i][j], v[j][i]);
        }
    }
    
    void reverse(vector<vector<int>> &v){
        for(int i = 0; i< v.size(); i++)
            std::reverse(v[i].begin(), v[i].end());
    }
    
    
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }

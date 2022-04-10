class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> st;
        
        for(string x : ops){
            if(x == "C")
                st.pop_back();
            else if (x == "D")
                st.push_back(2* st.back());
            else if ( x == "+"){
                int n = st.size();
                st.push_back(st[n-1] + st[n-2]);
            }
            else
                st.push_back(stoi(x));
        }
        
        int sum = 0;
        for(int x: st) sum+=x;
        
        return sum;
    }
};

    int balancedStringSplit(string s) {
        int r = 0;
        int l = 0;
        int ans = 0;
        
        for(auto i: s){
            (i == 'R') ? r++ : l++;
            if(r == l){ 
                ans++;
                r = 0;
                l = 0;
            }
        }
        return ans; 
    }

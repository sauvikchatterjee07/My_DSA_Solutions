    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
       
        vector<bool> res;
        int mxcan = INT_MIN;
        for(auto i: candies)
            mxcan = max(mxcan,i);
            
        for(auto i: candies){
            (i + ex >= mxcan) ? res.push_back(true) : res.push_back(false);
        } 
        return res;
    }

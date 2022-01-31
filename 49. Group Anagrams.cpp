    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mpp;
        //if n == 0 rt 0
        if(strs.size() == 0) return result;
        
        for(auto s: strs){
            
            string key = s;
            sort(key.begin(), key.end());
            
            mpp[key].push_back(s); //sorted string is the key
                                   //real strings are values which are stored in a vector
        }
        
        for(auto p: mpp)
            result.push_back(p.second);
        
        return result;
        
    }

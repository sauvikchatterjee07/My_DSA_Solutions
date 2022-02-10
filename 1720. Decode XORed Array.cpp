    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for(int i = 0; i<encoded.size(); i++){
            res.push_back(res[i] xor encoded[i]);
        }
        return res;
    }

    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto i: operations){
            (i[1] == '+') ? x++ : x--;
        }
        return x;
    }

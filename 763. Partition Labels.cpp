vector<int> partitionLabels(string s) {
    map<char, int> mp;
    //make the map of all the characters and their last occured index
    int n = s.length();
    for(int i = 0; i< n; i++){
        mp[s[i]] = i;
    }        

    //make result
    vector<int>res;
    int prev = -1;
    int mx = 0;
    for(int i = 0; i< n; i++){
        int temp = mp[s[i]];
        mx = max(mx,temp);
        if(mx == i){
            res.push_back(mx-prev);
            prev = mx;
        }
    }
    return res;
}

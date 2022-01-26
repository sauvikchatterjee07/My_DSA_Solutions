int longestsubs(string s, int k){
    int n = s.size();
    int i = 0, j = 0;
    unordered_map<char, int>mp;
    int res = -1;

    while(j<n){
        mp[s[j]]++; 

        if(mp.size()==k){  //if unique elements is equal to k
            res = max(res, j-i+1);
        }
        else if(mp.size()>k){   //if unique elements is greater than k
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    return res;
}

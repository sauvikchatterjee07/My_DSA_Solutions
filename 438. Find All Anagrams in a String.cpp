    vector<int> findAnagrams(string txt, string pat) {
    //count occurance of all character in the pattern
    unordered_map<char, int>map;

    for(auto i: pat)
        map[i]++;

    int count = map.size();
    vector<int> ans;
    int i = 0, j = 0;
    int k = pat.size();

    while (j<txt.size())
    {   
        //if the pattern matches the text given, decrement the count of that character
        if(map.find(txt[j]) != map.end()){
            map[txt[j]]--;
        
        //if one character completely matches with the number of occurance in the window of         that character, decrement the count
            if(map[txt[j]] == 0)
                count--;
        }

        //make the window
        if(j - i + 1 < k) j++;
        else if(j - i + 1 == k){
            if(count == 0)
                ans.push_back(i);
        
            //reverse whatever we did earlier, if the i'th element is present int the map               in terms of sliding the window
            if(map.find(txt[i]) != map.end()) {
                map[txt[i]]++;

                if(map[txt[i]] == 1)
                    count++;
            }
                i++; j++;
        }
    }
    return ans;
}

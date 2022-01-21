string addSpaces(string s, vector<int>& spaces) {
    int j = 0;
    string res ="";

    for (int i = 0, j = 0; i < s.length(); i++)
    {
        if(j<spaces.size() and i == spaces[j]){
            res+=' ';
            j++;
        }
        res+=s[i];
    }
    return res;
    }

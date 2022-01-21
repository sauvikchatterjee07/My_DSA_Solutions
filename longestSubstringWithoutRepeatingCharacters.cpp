int lengthOfLongestSubstring(string s) {
    char left = 0, right = 0;
    int maxim = 0;
    set<char> seen;

    while(right<s.length()){
        char c = s[right];
        int z = seen.size();
        seen.insert(s[right]);
        int k = seen.size();
        if(k==z+1){                                 //Check if it is inserted in the set or not
            maxim = max(maxim, (right-left+1));     //Keep updating the maximum
            right++;
        }
        else{
            while(s[left]!=c){
                seen.erase(s[left]);                //Erase all the previous items from the set, and start again. Max will get updated
                left++;
            }
            seen.erase(c);                          //Erase the actual repeating character from the set
            left++;
        }
    }
    return maxim;
    }

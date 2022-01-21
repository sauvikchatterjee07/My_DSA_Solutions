string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++)
        {   
            string temp = words[i];
            reverse(words[i].begin(), words[i].end());

            if(temp == words[i]){
                return temp;
                break;
            }
        }
    return {};
    }

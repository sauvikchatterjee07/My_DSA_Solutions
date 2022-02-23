 bool isLongPressedName(string name, string typed) {
        int i{0},j{0};
        while(i<name.length()){
            if(name[i]==typed[j]) i++,j++;
            else if(name[i]!=typed[j] && j>0 && typed[j]==typed[j-1]) j++;
            else return 0;
        }

        while(j<typed.length())
            if(typed[j++]!=name[name.length()-1]) return 0;
        return 1;
    }

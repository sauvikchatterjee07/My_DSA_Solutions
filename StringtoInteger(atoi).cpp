int myAtoi(string s) {

    if(s.size()== 0) return 0; //base case
    int i = 0;
    while(i < s.size() && s[i] == ' ') i++; //Remove the whitespaces
    
    s = s.substr(i); //new string is without the white spaces

    //handle the sign
    int sign = 1;
    long long int ans = 0;
    if(s[0] == '-') sign = -1;
    
    int MAX = INT_MAX, MIN = INT_MIN;
    i = (s[0] =='+' || s[0] == '-') ? 1 : 0; // if any sign is present start from index 1 or start from index 0

    while(i<s.length()){
        if(s[i]==' ' || !isdigit(s[i])) break; // if at any point i encounters a whitespace or non numeric value break out of the loop

        ans = ans*10 + s[i] - '0'; //It converts a char to an integer by subtracting the ASCII value (48) of 0 from the char
        if(sign == -1 && ans*-1 < MIN){
            ans = MIN;
            return ans;
            break;
        }
        if(sign == 1 && ans > MAX){
            ans = MAX;
            return ans;
        }
        i++;
    }
    return (int)(sign*ans); //return integer form of the ans as it is long int 

    }

bool isValid(string s) {

    int n = s.size();
    stack<char> st;
    bool res = true;

    for(int i = 0 ; i < n ; i++){

        if ((s[i] == '(') or (s[i] == '{') or (s[i] == '['))
        {
            st.push(s[i]);    
        }

        else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }                
            else{
                res = false;
                break;
            }
        }

        else if(s[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }                
            else{
                res = false;
                break;
            }
        }

        else if(s[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }                
            else{
                res = false;
                break;
            }
        }
    }
    if(!st.empty())
        return false;
    else
        return res;
    }

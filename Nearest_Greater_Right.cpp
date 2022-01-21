auto nearest_greater_right(vector<int>v){

    int n = v.size();
    stack<int> st;
    vector<int> res;
    st.push(v[n-1]);
    res.push_back(-1);

     for(int j=n-2;j>=0;j--)
      {
            while(st.size()>0 && st.top()<v[j])
            {
                st.pop();
            }
         
         if(st.size()==0)
         {
            res.push_back(-1);
         }
        else
         {
            res.push_back(st.top());

         }
         st.push(v[j]);
      }
      reverse(res.begin(),res.end());
     return res;
      
    }

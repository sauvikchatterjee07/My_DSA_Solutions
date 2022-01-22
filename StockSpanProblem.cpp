    
  //Leetcode Solution
  //Array of prices is not given

    stack<pair<int,int>>st; 
    int count = 0;  // this acts as the index or we can say keep the track of the index of the element since we donot have the array of prices here 
    
    StockSpanner() {
        
    }
    
    int next(int price) {
         
        while(st.empty()==false && st.top().first<=price)
        {
            st.pop();
        }
     
        int ans = (st.empty())?count+1:count-st.top().second;
        st.push({price,count}); // push into the stack the price with its count we can say we are pushing the {price,index of the element (i.e count)}
        count = count+1;
       
        
        return ans;
    }


  //Generalized Solution
  //Array of prices is Given
  //This problem is nothing but Nearest greater to left problem, just need to push a pair of price and it's index int the stack and return the index - result[index], where result is the NGL vector result

vector<int> nearest_greater_left(vector<int>v){

    int n = v.size();
    vector<int>result;
    stack<pair<int, int>> st;
    st.push({v[0], 0});
    result.push_back(-1);

    for (int i = 1; i < n; i++)
    {
        while(!st.empty() && st.top().first<v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            result.push_back(-1);
        }
        else if(st.top().first>=v[i])
            result.push_back(st.top().second);

        st.push({v[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        result[i] = i - result[i];
    }
    
    return result;
}


int main()
{   
    vector<int> v = {100,80,60,70,60,75,85};
    auto v1 = nearest_greater_left(v);
    for(auto i: v1)
        cout<<i<<" ";


    return 0;
}

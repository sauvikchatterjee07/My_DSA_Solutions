    int nextGreaterElement(int n) {
        
        string inp = to_string(n);
        //find the deep
        int deep = inp.size()-2;
        while(deep >= 0 && inp[deep] >= inp[deep+1]){
            deep--;
        }
        //if no such element is present return -1 
        if(deep == -1) return -1;
        
        //find the just smaller element of inp[deep] and swap it with inp[deep] because that will give the just greater element
        int k = inp.size()-1;
        while(inp[deep] >= inp[k]){
            k--;
        }
        swap(inp[k], inp[deep]);
        
        //concat from starting to inp[deep] just like that
        string res = "";
        for(int i = 0; i<=deep; i++){
            res+=inp[i];
        }
        //From the end of the string till inp[deep] reverse the elements in order to find the just greater element
        for(int i = inp.size()-1; i>deep; i--){
            res+=inp[i];
        }
        //finally return the integer form of that string
        try{
            return stoi(res);
        }
        //use try catch because for the cases integer value crosses INT_MAX it should return -1
        catch(exception e){
            return -1;
        }

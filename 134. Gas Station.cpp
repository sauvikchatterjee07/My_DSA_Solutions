    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        int surplus = 0;
        int tot_surplus = 0;
        int starting_idx = 0;
        
        for(int i = 0; i < n; i++){
            
            surplus += gas[i] - cost[i];
            tot_surplus += gas[i] - cost[i];
            
            if(surplus < 0){ //This is not the starting idx, try the next idx
                surplus = 0;
                starting_idx = i+1;
            }
            
        }
        return (tot_surplus < 0) ? -1 : starting_idx;
    }

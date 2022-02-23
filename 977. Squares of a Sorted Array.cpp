    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int idx = nums.size()-1;
        vector<int> res(nums.size());
        
        while(i<=j){
            
            int v1 = nums[i] * nums[i];
            int v2 = nums[j] * nums[j];
                    
            if(v1 > v2){
                res[idx] = v1;
                i++;
            }
            else{
                res[idx] = v2;
                j--;
            }
            
            idx--;
        }
        
        return res;
    }

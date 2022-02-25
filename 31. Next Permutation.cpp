    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        //find the first element which is greater than its previous element starting from right
        for(int i = n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                idx = i;
                break;
            }   
        }
        if(idx == -1)
            sort(nums.begin(), nums.end());
        //find the nearest element right to idx which is just greater than nums[idx-1]
        else{
            int prev = idx;
            for(int i = idx+1; i<n; i++){
                if(nums[i] > nums[idx-1])
                    prev = i;
            }
            //Swap those values
            swap(nums[prev], nums[idx-1]);
            
            //reverse the rest of the elements in order to find the just nrxt permutation
            
            reverse(nums.begin()+idx, nums.end());
        }
    }        

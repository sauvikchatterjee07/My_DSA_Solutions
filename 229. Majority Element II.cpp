    vector<int> majorityElement(vector<int>& nums) {
        int val1 = nums[0];
        int cnt1 = 1;
        
        int val2 = nums[0];
        int cnt2 = 0;
        
        for(int i = 1; i< nums.size(); i++){
            
            if(nums[i] == val1)
                cnt1++;
            else if(nums[i] == val2)
                cnt2++;
            else{
                if(cnt1==0){
                    val1 = nums[i];
                    cnt1 = 1;
                }
                else if(cnt2 == 0){
                    val2 = nums[i];
                    cnt2 = 1;
                }
                else{
                    cnt1--;
                    cnt2--;
                }
            }
        }
            
            int occ1 = 0;
            int occ2 = 0;
            
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] == val1)
                    occ1++;
                if(nums[i] == val2)
                    occ2++;
            }
            vector<int> res;
            
            if(occ1 > nums.size()/3)
                res.push_back(val1);
            if(val1 != val2 && occ2 > nums.size()/3)
                res.push_back(val2);
        
         return res;
    }

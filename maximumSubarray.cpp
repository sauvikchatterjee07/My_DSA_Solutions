int maxSubArray(vector<int>& nums) {
        int cm = 0;
        int mm = INT_MIN;
        
        for(int i = 0; i< nums.size(); i++){
            cm = cm + nums[i];
            if(cm>mm){
                mm = cm;
            }
            if(cm<0){
                cm = 0;
            }
        }
    return mm;
    }

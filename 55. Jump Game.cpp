    bool canJump(vector<int>& nums) {
        int reachable = 0;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            
            if(reachable < i) return false;
            else reachable = max(reachable, i+nums[i]);
        }
        return true;
    }

    int jump(vector<int>& nums) {
    
        int reachable = 0;
        int jump = 0;
        int current = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            reachable = max(reachable, nums[i] + i);
            
            if(current >= n-1)
                break;

            if(i == current){
                current = reachable;
                jump++;
            }
        }
            return jump;
    }

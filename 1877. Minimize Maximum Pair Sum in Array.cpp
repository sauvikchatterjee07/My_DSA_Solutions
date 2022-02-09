    int minPairSum(vector<int>& nums) {
        int total = INT_MIN;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i< n/2; i++)
            total = max(total, nums[i] + nums[n-1-i]);
    
        return total;
    }

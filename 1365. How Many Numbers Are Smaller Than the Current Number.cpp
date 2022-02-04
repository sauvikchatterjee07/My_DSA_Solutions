    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        unordered_map<int, int> mp;
        int n = nums.size();
        
        for(int i = n-1; i>=0; i--)
            mp[copy[i]] = i;
        
        for(int i = 0; i<n; i++)
            nums[i] = mp[nums[i]];
        return nums;
    }

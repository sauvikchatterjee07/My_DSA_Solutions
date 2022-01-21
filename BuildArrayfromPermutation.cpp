vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i< n; i++)
            nums.push_back(nums[nums[i]]);
        for(int i = 0; i<n; i++)
            nums.erase(nums.begin());
        return nums;
    }

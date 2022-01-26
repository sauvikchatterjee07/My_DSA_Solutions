    vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {   
        sum+=nums[i];
        nums.push_back(sum);
    }
    nums.erase(nums.begin(), nums.begin()+n);

    return nums;
    }

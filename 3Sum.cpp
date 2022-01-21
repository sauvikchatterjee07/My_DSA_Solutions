vector<vector<int>> threeSum(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();
    set<vector<int>>s;
    vector<vector<int>>res;

    for (int i = 0; i <= n-3; i++)
    {
        int j = i+1;
        int k = n-1;
        while(j < k){
            int currentsum = nums[i];
            currentsum+= nums[j];
            currentsum+= nums[k];
            if(currentsum==0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if(currentsum > 0){
                k--;
            }
            else{
                j++;
            }  
        }
    }
    for(auto it: s)
        res.push_back(it);
    return res;
}

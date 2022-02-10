    vector<int> pivotArray(vector<int>& nums, int pivot) {
//         vector<int> res,later1, later2;
        
//         for(int i = 0; i< nums.size(); i++){
//             if(nums[i]<pivot){
//                 res.push_back(nums[i]);
//             }
//             else if(nums[i] == pivot)
//                 later1.push_back(nums[i]);
//             else
//                 later2.push_back(nums[i]);
//         }
        
//         for(auto i: later1)
//             res.push_back(i);
        
//         for(auto i: later2)
//             res.push_back(i);
        
//         return res;
    int n = nums.size();
    vector<int> res(n, pivot);
    int i = 0, j = n-1;
    int low = 0, high = n-1;
        
    while(i<n){
        if(nums[i]<pivot){
            res[low] = nums[i];
            low++;
        }
        if(nums[j]>pivot){
            res[high] = nums[j];
            high--;
        }
        i++;
        j--;   
    }
        return res;
    }

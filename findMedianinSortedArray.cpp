double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double res = 0;
    vector<int> merged(nums1);
    for(auto i: nums2)
        merged.push_back(i);

    sort(merged.begin(), merged.end());
    int n = merged.size();

    if(n%2==1)
        return merged[n/2];

    if(n%2==0){
        int md = (n/2)-1;
        int mp = md+1;
        double key = merged[md]+merged[mp];
        res = (key)/2.00; 
        }
        return res;
    }

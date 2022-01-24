pair<vector<int>, vector<int>> mxl_mxr(vector<int> arr){

    int n = arr.size();
    vector<int>mxl(n);
    vector<int>mxr(n);
    mxl[0] = arr[0];
    mxr[n-1] = arr[n-1];
    for (int i = 1, j = n-2; i < n, j>=0; i++, j--)
    {
        mxl[i] = max(arr[i], mxl[i-1]);
        mxr[j] = max(arr[j], mxr[j+1]);
    }
    pair<vector<int>, vector<int>> pair = {mxl, mxr};
    return pair;
}

int trap(vector<int>& height) {

    int n = height.size();
    auto pair = mxl_mxr(height);
    vector<int>water(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        water[i] = min(pair.first[i], pair.second[i]) - height[i];
        sum = sum+water[i];    
    }

    return sum;
}

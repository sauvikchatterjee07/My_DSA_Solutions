#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    int n = nums1.size(), m = nums2.size();
    vector<int> result;
    map<int, int> map;
    stack<int> stack;

    for (int i = m-1; i >= 0; i--)
    {   
        while (!stack.empty() && nums2[i]>=stack.top())
        {
            stack.pop();
        }
        if (stack.empty())
        {
            map[nums2[i]] = -1;
        }
        else
        {
            map[nums2[i]] = stack.top();
        }
        
        stack.push(nums2[i]);

    }
    
    for(auto x: nums1)
        result.push_back(map[x]);

    return result;

    }


int main()
{   
    vector<int>v1 = {2,4};
    vector<int>v2 = {1,2,3,4};
    auto v3 = nextGreaterElement(v1, v2);
    for(auto i: v3)
        cout<<i<<" ";


    return 0;
}

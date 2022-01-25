vector<int> maxSlidingWindow(vector<int>& nums, int k) {    

    int i = 0;
    int j = 0;
    deque<int> dq;
    vector<int>result;

    while(j<nums.size()){

        //Calculation while pushing to the dq, so that dq.front always gives the largest element
        while (!dq.empty() && dq.back()<nums[j])
        {
            dq.pop_back(); //pop all the elements that are smaller than the element that is going to be pushed into the dq
        }
        dq.push_back(nums[j]); //Push the element into the dq
        

        if(j-i+1 < k){ //make the window
            j++;
        }
        else if(j-i+1 == k){
            //answer will always be present at the front of the dq
            result.push_back(dq.front());

            //remove the calculation of i, so that we can move the window
            if(dq.front() == nums[i])
                dq.pop_front();

            //move the window
            i++;
            j++;
        }
    }
    return result;
}

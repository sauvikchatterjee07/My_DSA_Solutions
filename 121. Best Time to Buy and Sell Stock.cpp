    int maxProfit(vector<int>& prices) {
        int minsofar = INT_MAX;
        int maxprofit = 0;
        for(int i = 0; i< prices.size(); i++){
            minsofar = min(minsofar, prices[i]);
            int profit = prices[i] - minsofar;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }

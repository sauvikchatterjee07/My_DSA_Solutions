    static bool compare(pair<int,int>a, pair<int,int>b){
        return a.second < b.second;
    }
        
        
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v(n);
        for(int i = 0; i<n; i++) v[i] = {start[i], end[i]};
        sort(v.begin(), v.end(), compare);

        int res = 1;
        int i = 0;
        int j = 1;
        
        while(j<n){
            
            if(v[i].second < v[j].first){
                res++;
                i = j;
                j++;
            }
            else j++;
        }
        return res;
    }

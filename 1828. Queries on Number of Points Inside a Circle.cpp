    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v;
        
        for(int i = 0; i < queries.size(); i++){
            int count = 0;
            int x = queries[i][0], y = queries[i][1], r = queries[i][2];
            for(int j = 0; j < points.size(); j++){
                int m = points[j][0], n = points[j][1];
                    if((x-m)*(x-m) + (y-n)*(y-n) <= r*r)
                        count++;
            }
            
            v.push_back(count);
        }
        return v;
    }

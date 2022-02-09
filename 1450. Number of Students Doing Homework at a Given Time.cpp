    int busyStudent(vector<int>& startTime, vector<int>& endTime, int q) {
     int cnt = 0;
        for(int i = 0 ; i < startTime.size() ; i++){
            if(startTime[i] <= q && endTime[i] >= q) cnt++;
        }
        return cnt;
    }

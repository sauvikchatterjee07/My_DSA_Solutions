    bool canPlaceFlowers(vector<int>& f, int n) {
        if(f[0] == 0) {
            f[0] = 1;
            n--;
        }
        for(int i=1;i<f.size();i++) {
            if(f[i] == 0 && f[i-1] == 0) {
                f[i] = 1;
                n--;
            }
            if(f[i] && f[i-1]) {
                f[i-1] = 0;
                n++;
            }
        }
        if(n>0) return false;
        return true;
    }

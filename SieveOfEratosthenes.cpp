int countPrimes(int n) {
        vector<bool> pr(n+1, true);
        if(n <=1){
            return 0;
        }
        
        for(int i = 2; i*i<=n; i++){
            if(pr[i]==true){
                for(int j = i*i; j<=n; j+=i){
                    pr[j]=false;
                }
            }
        }
        int sum = 0;
        for(int i = 2; i<n; i++){
            if(pr[i] == true){
             sum+=1;   
            }
        }
        return sum;
    }

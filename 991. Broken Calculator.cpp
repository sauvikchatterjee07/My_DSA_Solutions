class Solution {
public:
    int brokenCalc(int sv, int target) {
        int counter = 0;
        
        while(target > sv){
            
            if(target%2 == 0)
                target /= 2;
            else
                target += 1; 
            
            counter++;
        }
        
        counter += abs(sv - target);
        
        return counter;
    }
};

class Solution {
public:
    int maxProductDifference(vector<int>& num) {
       // find first largest and 2nd largest and smaller and 2nd smaller
        
        int biggest = 0;
        int secondBiggest = 0;
        
        int smallest = INT_MAX;
        int secondSmallest= INT_MAX;
        
        for(int i =0;i<num.size();i++){

        if(num[i] > biggest ){
secondBiggest = biggest;
            biggest = num[i];
        }
            else {
                secondBiggest = max(secondBiggest,num[i]);
            }
            
            if(num[i] < smallest ){
                secondSmallest = smallest;
                smallest = num[i];
            }
            
            else {
                secondSmallest = min(secondSmallest,num[i]);
            }
}
        return biggest * secondBiggest  - smallest*secondSmallest;
    }
};
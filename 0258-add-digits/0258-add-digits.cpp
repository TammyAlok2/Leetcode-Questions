class Solution {
public:
    int addDigits(int num) {
        // base case
        int sum =0;
        if(num < 10){
            return num;
        }
        else {
            while(num !=0){

                int rem = num%10;
                sum = sum + rem;
                num = num/10;
            }
         return   addDigits(sum);
        }
        
    }
};
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(),piles.end());
        int low = 1;
        while(low <= high){
            long long hours = 0;//to avoid overflow
            int mid = low +(high-low)/2;
            for(int i= 0;i<piles.size();i++){
                hours += ceil((double)(piles[i])/mid);
            }
            if(hours > h){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }return low;
    }
};
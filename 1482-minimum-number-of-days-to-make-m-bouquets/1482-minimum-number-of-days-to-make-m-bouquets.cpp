class Solution {
public:
    
    int findDays(vector<int>&bloomDay,int mid, int m,int k){
        int count =0;
        int noOfb = 0;
        
        for(int i =0;i<bloomDay.size();i++){
         if(bloomDay[i] <= mid){
                 count++;
         }
            else{
                noOfb += count/k;
                count =0;
            }
        }
        noOfb += count/k; 
        return noOfb >=m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
            long long val = m * 1ll * k * 1ll;
    int n = bloomDay.size(); //size of the array
    if (val > n) return -1; 
        
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high =  *max_element(bloomDay.begin(),bloomDay.end());
        
        while(low <=high){
            
            int mid = (low +high )/2;
            
            
            
            if(findDays(bloomDay, mid , m, k) )
            {
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        
        return low ;
        
    }
};
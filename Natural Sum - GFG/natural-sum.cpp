//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	int find(int n){
   	    // Code here
   	     if(n==1)
   return n;
   int i =1;
   int ans =1;
  
   
   while(ans<n){
      ans = (i * (i+1) )/2;
      i++;
      if(ans == n)
      return i-1;
   }
   return -1;
   	 
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
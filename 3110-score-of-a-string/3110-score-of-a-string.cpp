class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length()-1;
        int ans =0;
        for(int i =0;i<n;i++){
 ans = ans +  abs(int (s[i]) - int (s[i+1]));
        }
        return ans;
    }
};
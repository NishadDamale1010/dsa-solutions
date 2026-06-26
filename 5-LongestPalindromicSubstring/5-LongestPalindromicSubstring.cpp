// Last updated: 6/26/2026, 1:45:38 PM
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0) return "";
        int start = 0 , maxLen = 1;
        for(int i = 0 ; i < n ; i ++){
            //for odd length 
            int left = i , right = i ;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
            //even length 
            left = i , right = i+1 ;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
        } 
        return s.substr(start,maxLen);
    }
};
// Last updated: 6/26/2026, 1:42:31 PM
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0 ;
        for(int i = 0 ; i < n ; i ++ ){
            int left = i , right = i ;
            while(left>=0 && right< n && s[left]==s[right]){
                count++;
                left--;
                right++;
            }
            left = i , right = i+1 ;
            while(left>=0 && right< n && s[left]==s[right]){
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
};
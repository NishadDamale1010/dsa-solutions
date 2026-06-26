// Last updated: 6/26/2026, 1:42:28 PM
class Solution {
public:
    bool check(string s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while(left < right) {
            if(s[left] == s[right]) {
                left++;
                right--;
            } 
            else {
                // skip either left or right
                return check(s, left + 1, right) || 
                       check(s, left, right - 1);
            }
        }

        return true;
    }
};
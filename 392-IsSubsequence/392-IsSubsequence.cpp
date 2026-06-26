// Last updated: 6/26/2026, 1:43:03 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ;
        int j = 0 ;
        while(i<s.size() && j < t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==s.size();
    }
};
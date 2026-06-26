// Last updated: 6/26/2026, 1:43:23 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(char x : s) mp1[x]++; 
        for(char x : t) mp2[x]++;
        return mp1==mp2; 
    }
};
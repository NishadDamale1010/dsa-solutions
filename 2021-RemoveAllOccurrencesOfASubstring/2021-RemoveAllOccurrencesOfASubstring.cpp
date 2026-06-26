// Last updated: 6/26/2026, 1:41:54 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
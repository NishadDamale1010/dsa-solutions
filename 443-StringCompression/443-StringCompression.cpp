// Last updated: 6/26/2026, 1:42:57 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;        // read pointer
        int index = 0;    // write pointer

        while(i < chars.size()) {
            char ch = chars[i];
            int count = 0;

           
            while(i < chars.size() && chars[i] == ch) {
                i++;
                count++;
            }

           
            chars[index++] = ch;

           
            if(count > 1) {
                string s = to_string(count);
                for(char c : s) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};
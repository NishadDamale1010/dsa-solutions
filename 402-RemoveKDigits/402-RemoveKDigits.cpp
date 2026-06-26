// Last updated: 6/26/2026, 1:43:01 PM
class Solution {
public:
    string removeKdigits(string num, int k) {

        string st;

        for(char x : num) {

            while(!st.empty() && k > 0 && st.back() > x) {
                st.pop_back();
                k--;
            }

            st.push_back(x);
        }

        while(k > 0) {
            st.pop_back();
            k--;
        }

        int i = 0;

        while(i < st.size() && st[i] == '0') {
            i++;
        }

        string ans = st.substr(i);

        return ans.empty() ? "0" : ans;
    }
};
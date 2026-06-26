// Last updated: 6/26/2026, 1:45:24 PM
class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        
        for(int i = 0; i < str.size(); i++){
            char ch = str[i];
            
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else {
                if(st.empty()) return false; 
                
                if( (st.top() == '(' && ch == ')') ||
                    (st.top() == '[' && ch == ']') ||
                    (st.top() == '{' && ch == '}') ){
                        st.pop();
                }
                else {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};

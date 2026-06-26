// Last updated: 6/26/2026, 1:42:23 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     vector<int> st;
     for(int x : asteroids){
        bool destroyed=false;
        while(!st.empty() && st.back()>0 && x<0){
            if(st.back()<abs(x)){
                st.pop_back();
            }
            else if(st.back()==abs(x)){
                st.pop_back();
                destroyed=true;
                break;
            }
            else{
                destroyed=true;
                break;
            }
        }
        if(!destroyed){
            st.push_back(x);
        }
     }   
     return st;
    }
};
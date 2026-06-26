// Last updated: 6/26/2026, 1:43:04 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> M;
        queue<int> Q;
        for(int i=0;i<s.size();i++){
            if(M.find(s[i])==M.end()){
                Q.push(i);
            }
            M[s[i]]++;
            while(Q.size()>0 && M[s[Q.front()]]>1 ){
                Q.pop();
            }
        }
        return Q.empty() ? -1:Q.front();
    }
};
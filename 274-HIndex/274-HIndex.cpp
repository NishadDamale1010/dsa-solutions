// Last updated: 6/26/2026, 1:43:18 PM
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(),citations.end());
        for(int i = 0 ; i <  n ; i++){
            int h = n-i;
            if(citations[i]>=h){
                return h;
            }
        }
        return 0;
    }
};
// Last updated: 6/26/2026, 1:41:57 PM
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int target = tickets[k];
        for(int i = 0 ; i < tickets.size() ; i++){
            if (i <= k){
                time += min(tickets[i] , target );
            }
            else{
                time += min(tickets[i] , target - 1);
            }
        }
        return time;
    }
};
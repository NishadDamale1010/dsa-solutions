// Last updated: 6/26/2026, 1:44:22 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_tank=0;
        int curr_tank=0;
        int start=0;
        for(int i = 0 ; i < gas.size() ; i ++){
            int gain = gas[i]-cost[i];
            total_tank+=gain;
            curr_tank+=gain;
            if(curr_tank<0){
                start=i+1;
                curr_tank = 0;
            }
        }
        return (total_tank>=0)?start:-1;
    }
};
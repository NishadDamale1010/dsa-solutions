// Last updated: 6/26/2026, 1:42:12 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int i = 0 , j = n -1 ;
        int boats = 0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }
            else{
                j--;
            }
            boats++;
        }
        return boats ;
    }
};
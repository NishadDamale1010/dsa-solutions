// Last updated: 6/26/2026, 1:43:54 PM
class Solution {
public:
    int getNext(int n){
        int sum = 0 ;
        while(n){
        
            int digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n , fast = getNext(n);
        while(fast!=1 && slow!=fast){
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast==1;
    }
};
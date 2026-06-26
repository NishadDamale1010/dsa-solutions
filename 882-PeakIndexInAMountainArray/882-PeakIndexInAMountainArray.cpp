// Last updated: 6/26/2026, 1:42:14 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0  , right = arr.size()-1;
        int peak = -1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(arr[mid]<arr[mid+1]){
                left=mid+1;
            }
            else{
                right = mid;
            }
        }
        return left;
    }
};
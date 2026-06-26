// Last updated: 6/26/2026, 1:43:20 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int low = 1, high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                // mid can be the answer
                high = mid;
            } else {
                // first bad version is after mid
                low = mid + 1;
            }
        }

        return low;
    }
};
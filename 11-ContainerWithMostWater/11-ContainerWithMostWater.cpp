// Last updated: 6/26/2026, 1:45:35 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int maxArea = 0;
        int right = height.size()-1;
        while(left<right){
            int width = right-left;
            int area = width*min(height[left],height[right]);
            maxArea = max(maxArea,area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};
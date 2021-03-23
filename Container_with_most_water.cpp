//Question link
//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int area = min(height[i],height[j])*(j-i);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            if(area>ans)
            {
                ans = area;
            }
        }
        return ans;
    }
};
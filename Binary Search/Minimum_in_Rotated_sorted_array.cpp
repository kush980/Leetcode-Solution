//Question link
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid = (r+l)/2;
            
            if(nums[mid]>=nums[0])
                l=mid+1;
            else
                r=mid;
        }
        return nums[l];
    }
};
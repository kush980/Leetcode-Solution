//Question link
//https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=nums.size(),mid;
        while(l<r)
        {
            mid = (l+r)/2;
            if(nums[mid]>=nums[0])
                l=mid+1;
            else
                r=mid;
        }
        
        if(l==n)
            l=0;
        if(target>=nums[l] && target<=nums.back())
            r=n;
        else
            r=l,l=0;
        while(l<r)
        {
            mid = (l+r)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        if(nums[l]==target)
            return l;
        else
            return -1;
    }
};
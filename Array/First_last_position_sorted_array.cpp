//Question link
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    int find(vector<int> &nums,int target,bool user)
    {
        int l=0,r=nums.size(),ans=-1;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(target==nums[mid])
            {
                ans=mid;
                if(user)
                    l=mid+1;
                else
                    r=mid;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target){
        return {find(nums,target,false),find(nums,target,true)};
    }
};
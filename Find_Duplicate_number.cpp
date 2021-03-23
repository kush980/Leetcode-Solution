//Question link
//https://leetcode.com/problems/find-the-duplicate-number/submissions/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int l=0,r=nums.size();
        while(l<r)
        {
            int mid = (l+r)/2;
            int cnt=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<=mid)
                    cnt++;
            }
            if(cnt>mid)
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};
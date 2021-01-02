//Question link
//https://leetcode.com/problems/3sum-closest/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans;
        int diff = INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i-1]==nums[i])
                continue;
            int l=i+1;
            int r=nums.size()-1;
            int x = nums[i];
            
            while(l<r)
            {
                if(nums[l]+nums[r]+nums[i]-target==0)
                {
                    return target;
                }
                else 
                {
                    if(abs(nums[l]+nums[r]+nums[i]-target)<diff)
                    {
                        diff = abs(nums[l]+nums[r]+nums[i]-target);
                        ans = nums[l]+nums[r]+nums[i];
                    }
                    if((nums[l]+nums[r]+nums[i]-target)>0)
                    {
                        while(r>1 && nums[r]==nums[r-1])
                            r--;
                        r--;
                    }
                    else
                    {
                        while(l<nums.size()-1 && nums[l]==nums[l+1])
                            l++;
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};
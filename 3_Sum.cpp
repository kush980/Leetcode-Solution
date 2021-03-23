//Question link
//https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l = i+1;
            int r = nums.size()-1;
            int x = nums[i];
            while(l<r)
            {
                if(x+nums[l]+nums[r]==0)
                {
                    ans.push_back(vector<int>{x,nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                    {
                        l++;
                    }
                    while(l<r && nums[r]==nums[r-1])
                    {
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(x+nums[l]+nums[r]<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return ans;
    }
};
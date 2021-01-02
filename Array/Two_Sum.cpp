//Question link
//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int a = target - nums[i];
            if(m.find(a)!=m.end())
            {
                return {m[a],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
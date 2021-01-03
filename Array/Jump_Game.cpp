//Question link
//https://leetcode.com/problems/jump-game/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(curr>=i)
                curr = max(curr,i+nums[i]);
            else
                return false;
        }
        return true;
    }
};
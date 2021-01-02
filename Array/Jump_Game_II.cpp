//Question link
//https://leetcode.com/problems/jump-game-ii/
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==0)
            return 0;
        int jump=1,curr=nums[0],mx=nums[0];
        int i=0;
        while(i<nums.size()-1)
        {
            mx = max(mx,i+nums[i]);
            if(curr==i)
            {
                jump++;
                curr = mx;
            }
            i++;
        }
        return jump;
    }
};
//Question link
//https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.size() == 0){
            return 0;
        }
        int s = nums.size();
        for(int i=0; i<nums.size();){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                s--;
                nums.resize(s);
                continue;
            }
            i++;
        }
        return s;
    }
};
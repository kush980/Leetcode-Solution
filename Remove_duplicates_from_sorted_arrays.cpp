//Question link
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return unique(nums.begin(),nums.end())-nums.begin();
    }
};
//Question link
//https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        const int n = nums.size();
        int i,j;
        for(i=n-1; i>=1 && nums[i-1]>=nums[i];--i);
        if(i>0){
            for(j=i; j<=n-1 && nums[j]>nums[i-1];++j);
            swap(nums[i-1], nums[j-1]);
        }
        reverse(nums.begin()+i,nums.end()); 
    }
};
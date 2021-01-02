//Question link
//https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
public:
    double merge(vector<int>&nums1,vector<int> &nums2,int idx)
    {
        int i=0,j=0,cnt=0;
        vector<int> v;
        int res;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i]);
                cnt++;
                i++;
                if(cnt==idx+1)
                {
                    res = v[idx];
                    break;
                }
                else if(cnt>idx+1)
                {
                    break;
                }
            }
            else
            {
                v.push_back(nums2[j]);
                cnt++;
                j++;
                if(cnt==idx+1)
                {
                    res = v[idx];
                    break;
                }
                else if(cnt>idx+1)
                {
                    break;
                }
            }
        }
        while(i<nums1.size())
        {
            v.push_back(nums1[i]);
            cnt++;
            i++;
            if(cnt==idx+1)
            {
                res = v[idx];
                break;
            }
            else if(cnt>idx+1)
            {
                break;
            }
        }
        while(j<nums2.size())
        {
            v.push_back(nums2[j]);
            cnt++;
            j++;
            if(cnt==idx+1)
            {
                res = v[idx];
                break;
            }
            else if(cnt>idx+1)
            {
                break;
            }
        } 
        return res;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        double ans;
        if((m+n)&1)
        {
            int fl = floor(m+n)/2;
            ans = merge(nums1,nums2,fl);
        }
        else
        {
            int fl = floor(m+n+1)/2;
            int cl = ceil(m+n+1)/2;
            double ans1 = merge(nums1,nums2,fl-1);
            double ans2 = merge(nums1,nums2,fl);
            ans = (ans1+ans2)/2;
        }
        return ans;
        
        
    }
};
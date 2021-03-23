//Question link
//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0,n=intervals.size();
        for(int j=1;j<n;j++)
        {
            if(intervals[j][0]>intervals[i][1])
            {
                i++;
                intervals[i]=intervals[j];
            }
            else
                intervals[i][1] = max(intervals[i][1],intervals[j][1]);
        }
        n--;
        while(n-->i)
            intervals.pop_back();
        return intervals;
    }
};
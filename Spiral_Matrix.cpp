//Question link
//https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int s_r=0,s_c=0,r=matrix.size()-1,c=matrix[0].size()-1;
        vector<int> ans;
        // int i=0,j=0;
        if(matrix.size()==0)
            return {};
        while(s_r<=r && s_c<=c)
        {
            for(int i=s_c;i<=c;i++)
                ans.push_back(matrix[s_r][i]);
            s_r++;
            if(s_r>r)
                break;
            for(int j=s_r;j<=r;j++)
                ans.push_back(matrix[j][c]);
            c--;
            if(s_c>c)
                break;
            for(int i=c;i>=s_c;i--)
                ans.push_back(matrix[r][i]);
            r--;
            
            if(s_r>r)
                break;
            for(int j=r;j>=s_r;j--)
               ans.push_back(matrix[j][s_c]);
            s_c++;
        }
        return ans;
    }
};
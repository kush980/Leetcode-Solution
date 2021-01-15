//Question link
//https://leetcode.com/problems/first-bad-version/submissions/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 0, res = -1;
        while(l <= n){
            int m = (l + n) / 2;
            if (isBadVersion(m)){
                res = m;
                n = m - 1;
            }
            else l = m + 1;
        }
        return l;
    }
};
/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gIndex = 0,sIndex = 0;
        while (gIndex < g.size() && sIndex < s.size()){
            if(g[gIndex] <= s[sIndex]) gIndex++;
            sIndex++;
        }
        return gIndex;
    }
};
// @lc code=end


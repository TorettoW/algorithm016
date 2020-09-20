/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;

        for (string& n: strs){
            string temp = n;
            sort(n.begin(),n.end());
            mp[n].push_back(temp);
        }
        

        res.reserve(mp.size());
        for(auto& n: mp){
            res.push_back(std::move(n.second));
        }

        return  res;
        
    }
};
// @lc code=end


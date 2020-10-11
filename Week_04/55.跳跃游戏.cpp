/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return true;
        int endReachIndex = nums.size()-1;
        for (int i = nums.size()-1; i >= 0; i--){
            if(nums[i] >= endReachIndex - i)endReachIndex = i;
        }
        return endReachIndex == 0;
    }
};
// @lc code=end


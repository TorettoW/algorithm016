/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slowIndex = 0;
        for(int fastIndex = 0;fastIndex < nums.size()-1; fastIndex++){
           if(nums[fastIndex] != nums[fastIndex+1]){
               slowIndex++;
               nums[slowIndex] = nums[fastIndex+1];
           }
            
        }
        return slowIndex+1;
    }
};
// @lc code=end


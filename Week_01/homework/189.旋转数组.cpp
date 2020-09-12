/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          //计算旋转起始位置
        int starIndex = nums.size() - k%nums.size();
        for(int i = 0; i < starIndex;i++){
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+starIndex);
    }
};
// @lc code=end


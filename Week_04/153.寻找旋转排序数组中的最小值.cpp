/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.back() > nums[0]) return nums[0];
        int left = 0,right = nums.size()-1;
        while (left < right){
            int mid = (left + right) >> 1;
            if(nums[0] <= nums[mid])left = mid+1;
            else right = mid;
        }
        return nums[right];
        
    }
};
// @lc code=end


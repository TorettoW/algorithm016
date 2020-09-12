/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */
//在暴力解法的基础上，对left_max&right_max求解进行优化，  
//采用了动态规划、栈和双指针方法，不过双指针法是最优的
// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
         int left_max = 0,right_max = 0,water = 0;
         int left = 0,right = height.size()-1;

         while (left < right){
             if(height[left] < height[right]){
                 if(height[left] >= left_max) left_max = height[left];
                 else water += left_max - height[left];
                 left++; 
             }
             else
             {
                 if(height[right] >= right_max) right_max = height[right];
                 else water += right_max - height[right];
                 right-- ; 
             }
             
         }
        return water;
    }
};
// @lc code=end


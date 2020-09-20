/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;//存储数组元素-index
        
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(hash.count(target-nums[i]) > 0 && hash[target-nums[i]] != i){
                return {i,hash[target-nums[i]]};
            }
        }

        return {};
    }
};
// @lc code=end


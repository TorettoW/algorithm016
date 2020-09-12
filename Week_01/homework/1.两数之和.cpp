/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sumBL = 0;
        for(int i = 0;i < nums.size() ;i++){
            for(int j = 0;j <nums.size();j++){
                sumBL = nums[i]+nums[j];
                if(sumBL == target){
                    if(i<j){
                            res.push_back(i);
                            res.push_back(j);
                            break;
                        }
                        else continue;
                    }
            }
        }
      return res;
    }
};
// @lc code=end


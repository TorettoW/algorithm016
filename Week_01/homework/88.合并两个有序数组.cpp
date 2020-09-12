/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //利用两个数组为有序的信息，从后向前使用双指针
        if(m == 0) {
            nums1.swap(nums2);
            return;
        }
        int p = m + n-1,p1 = m-1,p2 = n-1;
        while(p2 >= 0 && p1 >= 0){
            if(nums1[p1] > nums2[p2]){
                nums1[p] = nums1[p1];
                p1--;
            }
            else{
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        while(p2 >=0 ){
            nums1[p] = nums2[p2];
            p--;
            p2--;
        }
    }
};
// @lc code=end


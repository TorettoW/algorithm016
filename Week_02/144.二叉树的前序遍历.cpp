/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> sknode;
        TreeNode* cur = root;
        while(cur || sknode.size()){
            while(cur){
              sknode.push(cur);
              res.push_back(cur->val);
               cur = cur->left;
            }
            cur = sknode.top();
            sknode.pop();
            cur = cur->right;
        }
        return res;

    }
};
// @lc code=end


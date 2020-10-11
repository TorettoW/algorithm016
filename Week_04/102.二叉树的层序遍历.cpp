/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return{};
        queue<TreeNode*> queuenode;
        queuenode.emplace(root);

        while(!queuenode.empty()){
            vector<int> temp;
            int levelnode = queuenode.size();
            for(int i = 0 ; i < levelnode; ++i){
                TreeNode* node = queuenode.front();
                queuenode.pop();
                temp.emplace_back(node->val);
                if(node->left)queuenode.emplace(node->left);
                if(node->right)queuenode.emplace(node->right);
            }
          res.emplace_back(temp);
        }

        return res;
    }
};
// @lc code=end


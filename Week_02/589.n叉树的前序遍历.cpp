/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
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


/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root)return {};
        queue<Node*> qnode;
        qnode.emplace(root);

        while(!qnode.empty()){
            vector<int> leval;//the value of each level
            int n = qnode.size();
            for(int i = 0; i < n ;i++){
                root = qnode.front();
                qnode.pop();
                leval.emplace_back(root->val);
                for(auto childnode : root->children){
                    qnode.emplace(childnode);
                }
            }
            res.emplace_back(leval);
        }
        return res;
    }
};
// @lc code=end


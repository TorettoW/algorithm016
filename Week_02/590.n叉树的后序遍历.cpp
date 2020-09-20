/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
    vector<int> postorder(Node* root) {
        vector<int> res;
        stack<Node*> sknode;
        if(root) sknode.push(root);

        while(!sknode.empty()){
            root = sknode.top();
            sknode.pop();
            res.emplace_back(root->val);
            for(auto iter : root->children){
                sknode.push(iter);
            }
        }

        reverse(res.begin(),res.end());
     return res;
    }
};
// @lc code=end


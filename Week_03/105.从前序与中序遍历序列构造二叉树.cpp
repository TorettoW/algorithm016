/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         if(preorder.size()==0||inorder.size()==0)
            return NULL;
        map<int,int> m;
        for(int i=0;i<inorder.size();++i){
            m[inorder[i]]=i;
        }
        int cur=0;//表示这是第几个节点
        return build(preorder,0,inorder.size()-1,m,cur);
    }
    TreeNode* build(vector<int>& preorder, int is,int ie,map<int,int>& m, int& cur){
        if(ie<is)
        return nullptr;
        

        TreeNode* root=new TreeNode(preorder[cur]);//使用第cur个点生成节点
        root->left=NULL;
        root->right=NULL;

        int i=m[preorder[cur++]];//当前节点在中序遍历里的位置

        root->left=build(preorder,is,i-1,m,cur);//
        root->right=build(preorder,i+1,ie,m,cur);//
        return root;
    }
};
// @lc code=end


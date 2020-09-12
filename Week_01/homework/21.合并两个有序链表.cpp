/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* preNode = dummyNode;

        while(l1 != nullptr && l2 != nullptr ){
            if(l1->val < l2->val){
                preNode->next = l1;
                l1 = l1->next;
            }
            else{
                preNode->next = l2;
                l2 = l2->next;
            }
            preNode = preNode->next;
        }
        //两个链表最多有一个没有遍历完全
        if(l1 == nullptr){
            preNode->next = l2; 
        }
        else{
             preNode->next = l1; 
        }
        return dummyNode->next;
    }
};
// @lc code=end


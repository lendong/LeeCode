//
// Created by dong on 8/19/17.
//


#include <clocale>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return new TreeNode(head->val);
        }
        ListNode *mid=head,*end=head,*premid=NULL;
        while(end!=NULL&&end->next!=NULL){
            premid = mid;
            mid=mid->next;
            end=end->next->next;
        }
        premid->next=NULL;
        TreeNode *tnode=new TreeNode(mid->val);
        tnode->left = sortedListToBST(head);
        tnode->right = sortedListToBST(mid->next);
        return tnode;
    }
};
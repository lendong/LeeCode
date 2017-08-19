//
// Created by dong on 8/19/17.
//


#include <clocale>
#include "defStr.h"


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
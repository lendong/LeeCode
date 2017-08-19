//
// Created by dong on 8/19/17.
//

#include "defStr.h"

class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int inLen = inorder.size(),postLen = postorder.size();
        return dfs(inorder,0,inLen-1,postorder,0,postLen-1);
    }
    TreeNode * dfs(vector<int> &inorder,int inStart,int inEnd,vector<int> &postorder,int postStart,int postEnd)
    {
        if(inStart > inEnd)
            return nullptr;
        TreeNode *root = new TreeNode(postorder[postEnd]);
        int middle;
        for(middle=inStart;middle<=inEnd;++middle)
            if(inorder[middle] == root->val)
                break;
        int leftLen = middle-inStart;
        root->left = dfs(inorder,inStart,middle-1,postorder,postStart,postStart+leftLen-1);
        root->right = dfs(inorder,middle+1,inEnd,postorder,postStart+leftLen,postEnd-1);
        return root;
    }
};
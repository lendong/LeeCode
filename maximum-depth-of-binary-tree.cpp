//
// Created by dong on 8/20/17.
//
#include "StuctLib.h"


class treeDepth {
public:
    int maxDepth(TreeNode *root) {
        int res(0);
        getDepth(root,res);
        return res;

    }
    int getDepth(TreeNode* root,int &res){
        if(root==NULL){
            return 0;
        }
        res=max(getDepth(root->left,res),getDepth(root->right,res))+1;
        return res;
    }
};

class treeDepth2 {
public:
    int maxDepth(TreeNode *root) {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
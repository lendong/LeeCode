//
// Created by dong on 8/21/17.
//

#ifndef LEECODE_CLASSLIB_H
#define LEECODE_CLASSLIB_H
#include "StuctLib.h"

class pi2bt{
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);
    TreeNode *ipBt(vector<int>&preorder,int pre_beg,int pre_end,vector<int>&inorder,int in_beg,int in_end);
};
#endif //LEECODE_CLASSLIB_H

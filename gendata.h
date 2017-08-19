//
// Created by dong on 8/19/17.
//

#ifndef LEECODE_GENDATA_H
#define LEECODE_GENDATA_H

#include "defStr.h"
#include "binary-tree-level-order-traversal-ii.cpp"

vector<int> genvector(){
    vector<int> vec{1,2,3,4,5,7,9,0};
    return vec;
}

TreeNode * gentree(){
    Solution a;
    vector<int> inorder{1,3,2,5,6,4,7};
    vector<int> postorder{1,3,2,6,7,4,5};
    TreeNode *root=a.buildTree(inorder,postorder);
    return root;
}
#endif //LEECODE_GENDATA_H

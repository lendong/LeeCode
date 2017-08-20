//
// Created by dong on 8/21/17.
//

#include "StuctLib.h"
#include "classLib.h"

vector<int> genvector(){
    vector<int> vec{1,2,3,4,5,7,9,0};
    return vec;
}

TreeNode * gentree(){
    pi2bt a;
    vector<int> inorder{1,2,3,5,6,4,7};
    vector<int> postorder{1,3,2,6,7,4,5};
    vector<int> preorder{5,2,1,3,4,6,7};
    TreeNode *root=a.buildTree(preorder,inorder);
    return root;
}
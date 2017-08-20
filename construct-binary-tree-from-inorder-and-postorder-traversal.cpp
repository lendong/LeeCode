//
// Created by dong on 8/19/17.
//
#include <clocale>
#include <vector>
#include "StuctLib.h"
#include "classLib.h"

using namespace std;

TreeNode *pi2bt::buildTree(vector<int> &preorder, vector<int> &inorder){
        int inLen = inorder.size(),preLen = preorder.size();
        return ipBt(preorder,0,preLen-1,inorder,0,inLen-1);
    }
TreeNode *pi2bt::ipBt(vector<int>&preorder,int pre_beg,int pre_end,vector<int>&inorder,int in_beg,int in_end){
        if(pre_end<pre_beg||in_end<in_beg) return NULL;
        TreeNode *root=new TreeNode(preorder[pre_beg]);
        int mid;
        for(mid=in_beg;mid<=in_end;mid++){  //将in_beg写错为了pre_beg
            if(inorder[mid] == root->val)
                break;
        }
        int leftLen=mid-in_beg;
        root->left = ipBt(preorder,pre_beg+1,leftLen+pre_beg,inorder,in_beg,mid-1); //要在纸上仔细推敲起始位置，注意向量首位索引为0
        root->right = ipBt(preorder,leftLen+pre_beg+1,pre_end,inorder,mid+1,in_end);
        return root;
    }

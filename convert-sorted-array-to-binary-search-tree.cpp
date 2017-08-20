//
// Created by dong on 8/19/17.
//

#include <clocale>
#include <vector>
using namespace std;
#include "Stucts.h"


class Solution {
public:
    TreeNode *Array2BST(vector<int> &num, int head,int end){
        if(head>=end) return NULL; //这里的end并不是最后一个元素的索引，而是最后元素索引+1
        int mid=(end+head)>>1; //通过二进制移位来获得中间元素,同(end-head)/2+head
        TreeNode *root=new TreeNode(num[mid]);
        root->left = Array2BST(num,head,mid);
        root->right =Array2BST(num,mid+1,end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return Array2BST(num,0,num.size());
    }
};
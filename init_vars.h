//
// Created by dong on 8/19/17.
//

#ifndef LEECODE_INIT_VARIABALES_H
#include <vector>
#include <clocale>

using namespace std;
vector<int> genvector(){
    vector<int> vec{1,2,3,4,5,7,9,0};
    return vec;
}



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










#define LEECODE_INIT_VARIABALES_H

#endif //LEECODE_INIT_VARIABALES_H

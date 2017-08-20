//
// Created by dong on 8/21/17.
//

#include <iostream>
#include <vector>
#include "Stucts.h"
#include "gendata.h"
#include "funcLib.h"
using namespace std;
#include "maximum-depth-of-binary-tree.cpp"


int run() {
    cout << "Hello, World!" << endl;
    vector<int>vec = genvector();
    vector<int> vec2(vec);
    vector<int> vec3;
    vec3.assign(vec.begin(),vec.begin()+3);
    int a = vec[2];
    vector<int>::iterator iter = vec.begin()+6;
    TreeNode *root = gentree();
    treeDepth b;
    cout<<b.maxDepth(root)<<endl;
    return 0;
}
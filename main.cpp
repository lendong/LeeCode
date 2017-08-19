#include <iostream>
#include <vector>
#include "defStr.h"
#include "gendata.h"
using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;
    vector<int>vec = genvector();
    vector<int> vec2(vec);
    vector<int> vec3;
    vec3.assign(vec.begin(),vec.begin()+3);
    int a = vec[2];
    vector<int>::iterator iter = vec.begin()+6;
    TreeNode *root = gentree();





    return 0;
}
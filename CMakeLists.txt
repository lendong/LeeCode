cmake_minimum_required(VERSION 3.8)
project(leecode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp convert-sorted-list-to-binary-search-tree.cpp convert-sorted-array-to-binary-search-tree.cpp StuctLib.h "construct-binary-tree-from-inorder-and-postorder-traversal.cpp" binary-tree-level-order-traversal-ii.cpp maximum-depth-of-binary-tree.cpp helloworld.cpp funcLib.h demo.cpp treeOpera.cpp debug.cpp gendata.cpp classLib.h)
add_executable(leecode ${SOURCE_FILES})
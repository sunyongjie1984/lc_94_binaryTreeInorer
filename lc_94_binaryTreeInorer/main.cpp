
//
//  main.cpp
//  94_binaryTreeInorder
//
//  Created by 孙永杰 on 2022/4/28.
//

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode( ) : val( 0 ), left( nullptr ), right( nullptr ) { }
    TreeNode( int x ) : val( x ), left( nullptr ), right( nullptr ) { }
    TreeNode( int x, TreeNode* left, TreeNode* right ) : val( x ), left( left ), right( nullptr ) { }
};

std::vector<int> a;
class Solution_94 {
public:
    std::vector<int> inorderTraversal( TreeNode* root ) {
        if ( root ) {
            if ( root->left ) {
                inorderTraversal( root->left );
            }
            a.push_back( root->val );
            if ( root->right ) {
                inorderTraversal( root->right );
            }
        }
        return a;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    TreeNode n1(1);
    TreeNode n2(2);
    TreeNode n3(3);
    n1.right = &n2;
    n2.left = &n3;
    Solution_94 a;
    const std::vector<int>& r = a.inorderTraversal( &n1 );
    std::vector<int>::const_iterator it = r.begin();
    while ( it != r.end( ) ) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout<< std::endl;
    return 0;
}

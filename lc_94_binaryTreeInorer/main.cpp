//
//  main.cpp
//  94_binaryTreeInorder
//
//  Created by 孙永杰 on 2022/4/28.
//
/*
 给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
 示例 1：

 输入：root = [1,null,2,3]
 输出：[1,3,2]
 示例 2：

 输入：root = []
 输出：[]
 示例 3：

 输入：root = [1]
 输出：[1]
  
 提示：

 树中节点数目在范围 [0, 100] 内
 -100 <= Node.val <= 100

 进阶: 递归算法很简单，你可以通过迭代算法完成吗？

 来源：力扣（LeetCode）
 链接：https://leetcode.cn/problems/binary-tree-inorder-traversal
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

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

int main( int argc, const char* argv[ ] ) {
    // insert code here...
    std::cout << "Hello, World!\n";
    TreeNode n1( 1 );
    TreeNode n2( 2 );
    TreeNode n3( 3 );
    n1.right = &n2;
    n2.left = &n3;
    Solution_94 a;
    const std::vector< int >& r = a.inorderTraversal( &n1 );
    std::vector< int >::const_iterator it = r.begin( );
    while ( it != r.end( ) ) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    return 0;
}

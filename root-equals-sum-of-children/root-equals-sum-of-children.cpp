//
// Created by sweetpotato on 24/06/23.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
# include <bits/stdc++.h>
using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };
class Solution {
public:
    bool checkTree(TreeNode* root) {
        if (root -> val == (root -> left -> val + root -> right -> val)){
            return true;
        }
        else{
            return false;
        }
    }
};
//test
int main() {
    
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(7);
    Solution solution;
    bool result = solution.checkTree(root);
    cout << result << endl;

    return 0;
}

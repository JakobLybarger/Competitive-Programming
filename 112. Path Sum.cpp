#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        return helper(root, sum, 0);
    }
    
    bool helper(TreeNode *root, int sum, int cur) {
        if (root == NULL) return false;
        cur += root->val;
        if(sum == cur && root->left == NULL && root->right == NULL) return true;
        return helper(root->left, sum, cur) || helper(root->right, sum, cur);
    }
};
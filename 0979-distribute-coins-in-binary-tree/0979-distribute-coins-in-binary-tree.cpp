/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int follow(TreeNode* root) {
        if (root == NULL)
            return 0;
        int lsub = follow(root->left);
        int rsub = follow(root->right);
        int temp = abs(lsub) + abs(rsub);
        count += temp;
        return root->val + lsub + rsub - 1;
    }
    int distributeCoins(TreeNode* root) {
        if (root == NULL)
            return 0;
        int ans = follow(root);
        return count;
    }
};
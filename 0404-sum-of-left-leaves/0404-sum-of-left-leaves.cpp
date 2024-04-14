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
class Solution {
public:
    bool isLeafNode(TreeNode* node){
       if(node->left == NULL and node->right == NULL) return true;
       return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int sum=0;
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    if(isLeafNode(node->left))sum+=node->left->val;
                    q.push(node->left);
                };
                if(node->right)q.push(node->right);
            }
        }
        return  sum;
    }
};
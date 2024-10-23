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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        int ans=root->val;
        while(!q.empty())
        {
            level++;
            //if(level==1 || level==2) root->val=0;
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                auto top=q.front();
                q.pop();
                top->val=ans-top->val;
                if(top->left){  q.push(top->left); sum+=top->left->val; }
                if(top->right) { q.push(top->right); sum+=top->right->val; }
                if(top->left&&top->right){
                    int temp=top->right->val+top->left->val;
                    top->left->val=temp;
                    top->right->val=temp;
                }
            }
            ans=sum;
        }
        return root;
    }
};
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
    long long int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode*,long long int>>q;
        long long int ans=0;
        q.push({root,0});
        while(!q.empty())
        {
            long long int n=q.size();
            long long int mn=q.front().second;
            long long int first=0,last=0;
            for(long long int i=0;i<n;i++)
            {
                long long int curr=q.front().second-mn;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0) first=curr;
                if(i==n-1)last=curr;
                if(node->left!=NULL) q.push({node->left,2*curr+1});
                if(node->right!=NULL) q.push({node->right,2*curr+1+1});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};
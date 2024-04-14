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
    void bfs(TreeNode*root,int&sum){
        //cout<<"YES"<<endl;
        if(root==NULL)return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                //cout<<"YES"<<endl;
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    if(isLeafNode(node->left))sum+=node->left->val;
                    q.push(node->left);
                };
                if(node->right)q.push(node->right);
                //cout<<node->val<<endl;
            }
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bfs(root,sum);
        return  sum;
    }
};
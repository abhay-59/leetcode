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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(!root)return -1;
        vector<long>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            long sum=0;
            for(int i=0;i<n;i++){
                auto fr=q.front();
                q.pop();
                sum+=fr->val;
                if(fr->left)q.push(fr->left);
                if(fr->right)q.push(fr->right);
            }
            v.push_back(sum);
        }
        if(v.size()<k)return -1;
        sort(v.begin(),v.end(),greater<long>());
        return v[k-1];
    }
};
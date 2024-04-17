/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            vector<Node*>vec;
            for(int i=0; i<n; i++) {                
                auto cur = q.front();
                q.pop();            
                if(cur -> left)                        
                    q.push(cur -> left);
                if(cur->right)
                    q.push(cur -> right);  
                vec.push_back(cur);
            }
            for(int i=0;i<vec.size();i++){
                if(i==vec.size()-1)vec[i]->next=NULL;
                else vec[i]->next=vec[i+1];
            }
        }
        
        return root;
    }
};
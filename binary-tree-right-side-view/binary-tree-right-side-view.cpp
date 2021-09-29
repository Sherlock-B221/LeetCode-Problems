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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        vector <int> a;
        
        if(root==NULL) return a;
        
        //queue will store node 
        queue<TreeNode*>q;
        // a.push_back(root -> val);
        q.push(root);
        while(!q.empty()){            
            int n = q.size();
            
            int v;
                
            for(int i=0;i<n;i++){
                
                TreeNode*f=q.front();
                if ( i == n-1 ) v = f -> val;
                
                q.pop();
                
                //check for left node : 
                if(f->left){
                    q.push(f->left);
                }
                
                //check for right node : 
                if(f->right){
                    q.push(f->right);
                }
            }
            a.push_back(v);
            // ans.push_back(v);
        }
        return a;
    }
};
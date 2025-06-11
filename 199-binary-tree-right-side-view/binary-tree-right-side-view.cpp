
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode *>q;
        if(!root)return res;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>ans;
            while(n--){
                TreeNode * temp =q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left)
                q.push(temp->left);   
                 if(temp->right)
                q.push(temp->right);        
             }
             int i= ans.size();
             res.push_back(ans[i-1]);
        }
        return res;

    }
};
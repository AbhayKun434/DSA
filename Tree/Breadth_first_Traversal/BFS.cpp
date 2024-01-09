void BFS(TreeNode* root){
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty()){
            TreeNode* node = que.front();
            que.pop();
            
            if(node->left != NULL)
                que.push(node->left);
            if(node->right != NULL)
                que.push(node->right);
        }
    }

void func(TreeNode* root, string &s){
        if(root==NULL){
            return;
        }
        s += to_string(root->val);
        if(root->left!=NULL){
            s += '(';
            func(root->left, s);
            s += ')';
        }
        if(root->right!=NULL){
            if(root->left==NULL) s += "()";
            s += '(';
            func(root->right, s);
            s += ')';
        }
    }
    string tree2str(TreeNode* root) {
        string ans;
        func(root, ans);
        return ans;
    }
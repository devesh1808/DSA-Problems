int sum = 0;
    void func(TreeNode* root, int low, int high){
        if(root==NULL) return;
        if(root->val>=low && root->val<=high) sum += root->val;
        if(root->val>=low) func(root->left, low, high);
        if(root->val<=high) func(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        func(root, low, high);
        return sum;
    }
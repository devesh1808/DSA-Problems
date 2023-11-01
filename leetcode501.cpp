//Find Mode in Binary Search Tree

class Solution {
public:
    void bst(TreeNode* root, unordered_map<int, int> &mp){
        if(root==NULL) return;
        mp[root->val]++;
        bst(root->left, mp);
        bst(root->right, mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mp;
        bst(root, mp);
        int mx = INT_MIN;
        for(auto it:mp){
            mx = max(mx, it.second);
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second==mx) ans.push_back(it.first);
        }
        return ans;
    }
};
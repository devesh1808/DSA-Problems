//GFG POTD - 15 Oct 2023

class Solution{
    
    public:
    
    void inorder(Node *root, vector<int> &v){
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    Node* buildBST(int left, int right, vector<int> &v){
        if(left>right) return NULL;
        int mid = (left+right)/2;
        Node *newRoot = new Node(v[mid]);
        newRoot->left = buildBST(left, mid-1, v);
        newRoot->right = buildBST(mid+1, right, v);
        return newRoot;
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int> v;
    	inorder(root, v);
    	return buildBST(0, v.size()-1, v);
    }
};
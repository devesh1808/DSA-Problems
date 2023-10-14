class Solution
{
    public:
    void inorder(Node *root, vector<int> &v){
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int> v1, v2;
     inorder(root1, v1);
     inorder(root2, v2);
     vector<int> v;
     int i = 0, j = 0;
     while(i<v1.size() && j<v2.size()){
         if(v1[i]==v2[j]){
             v.push_back(v1[i]);
             i++, j++;
         }
         else if(v1[i]<v2[j]) i++;
         else j++;
     }
     return v;
    }
};
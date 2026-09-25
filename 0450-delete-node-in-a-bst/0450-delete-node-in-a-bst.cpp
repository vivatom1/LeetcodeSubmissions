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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* left;
        TreeNode* right;
        int val;
        if(root==NULL)
        return nullptr;
        if(root->val>key)
        root->left=deleteNode(root->left,key);
        else if(root->val<key)
        root->right=deleteNode(root->right,key);
        else {
            if (root->left == NULL) {
                TreeNode* right = root->right;
                delete root;
                return right;
            }
            if (root->right == NULL) {
                TreeNode* left = root->left;
                delete root;
                return left;
            }


            TreeNode* left = root->left;
            while (left->right != NULL) {
                left = left->right;
            }
            
            root->val = left->val; 
            root->left = deleteNode(root->left, left->val);
        }

        return root;

    }
};
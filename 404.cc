/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumLeaves = 0;

    void checkLeftChild(TreeNode* node){
        if (node == NULL){
            return ;
        }
        if (node->left != NULL && node->left->left == NULL && node->left->right == NULL){
            sumLeaves += node->left->val;
            checkLeftChild(node->right);
        }else{
            checkLeftChild(node->left);
            checkLeftChild(node->right);
        }
    }

    int sumOfLeftLeaves(TreeNode* root) {
        checkLeftChild(root);
        return sumLeaves;
    }
};

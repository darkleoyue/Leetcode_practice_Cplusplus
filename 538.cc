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

    int sum = 0;

    TreeNode* convertBST(TreeNode* root) {
        convert(root);
        return root;
    }

    void convert(TreeNode* node){
        
        if(node == NULL){
            return;
        }

        convert(node -> right);
        sum += node -> val;
        node -> val = sum;
        convert(node -> left);
    }
};

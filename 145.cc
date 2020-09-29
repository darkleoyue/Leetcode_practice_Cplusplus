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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        stack<TreeNode*> staNodes;
        vector<int> res;
        staNodes.push(root);
        while(!staNodes.empty()){
            TreeNode* curNode = staNodes.top();
            if(curNode == nullptr){
                staNodes.pop();
                res.push_back(staNodes.top()->val);
                staNodes.pop();
                continue;
            }
            staNodes.push(nullptr);
            if(curNode->right){
                staNodes.push(curNode->right);
            }
            if(curNode->left){
                staNodes.push(curNode->left);
            }
        }
        return res;
    }
};

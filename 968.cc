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

    int cameras = 0;

    int BFS(TreeNode* curNode){
        
        if(curNode == NULL){
            return 0;
        }

        int left = BFS(curNode -> left);
        int right = BFS(curNode -> right);
        if(left == 0 && right == 0){
            curNode -> val = 1;
        }else if(left == 1 || right == 1){
            curNode -> val = 2;
            cameras += 1;
        }else{
            curNode -> val = 0;
        }

        return curNode -> val;
    }
    int minCameraCover(TreeNode* root) {
        
        int rootVal = BFS(root);
        int addOrNot = 0;
        if(rootVal == 1){
            addOrNot = 1;
        }else{
            addOrNot = 0;
        }

        return addOrNot + cameras;
    }
};

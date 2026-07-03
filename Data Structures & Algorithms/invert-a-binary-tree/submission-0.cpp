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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* temp;

        if(root != nullptr) {
            q.push(root);

            while(!q.empty()) {
                cout << "while loop" << endl;
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left != nullptr) {
                    q.push(curr->left);
                }

                if(curr->right != nullptr) {
                    q.push(curr->right);
                }
                temp = curr->left;
                curr->left = curr->right;
                curr->right = temp;
            }
        }
        return root;
    }
};

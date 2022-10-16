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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string cur;
        
        inorder(root, cur, ans);
        
        return ans;
    }
    
    void inorder(TreeNode* root, string& cur, vector<string>& ans) {
        if (root == nullptr) {
            return;
        }
        
        cur.append(to_string(root -> val));
        
        if (root -> left == nullptr && root -> right == nullptr) {
            ans.push_back(cur);
        } else {
            cur.append("->");
            inorder(root -> left, cur, ans);
            inorder(root -> right, cur, ans);
            cur.pop_back();cur.pop_back();
        }
        
        while (!cur.empty() && cur.back() != '>') {
            cur.pop_back();
        }
    }
};
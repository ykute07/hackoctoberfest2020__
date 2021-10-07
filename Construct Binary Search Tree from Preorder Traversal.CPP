#https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
Solution for the problem
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
    TreeNode* build(vector<int>pre,int preindex,int low,int high,int size){
        if(root==NULL){
            return root=new TreeNode(ele);
        }
        if(root->val>ele){
            root->left=build(root->left,ele);
        }
        if(root->val<ele){
            root->right=build(root->right,ele);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int pre=0;
      return build(preorder,pre,0,preorder.size()-1,preorder.size());
    //    return root;
        
    }
};

//Preoder 
//    5
//  2   6
// 1 3    8
// output:5 2 1 3 6 8

//Indorder
//   1
//  2   3
// 4 5    7
//output:4 2 5 1 3 7  左子樹先讀
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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stackk;//用一個stack放 先進後出
        vector<int> result;
        TreeNode* node = root;
        while(node || !stackk.empty())
        {
            while(node )
            {
                stackk.push(node);
                node = node->left;
            }
            node = stackk.top();//回傳Stack「最上面」的資料
            stackk.pop();
            result.push_back(node->val);
            node = node->right;
        }
        return result;
    }
};

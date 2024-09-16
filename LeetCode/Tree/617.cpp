#include <bits/stdc++.h>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void InorderTraversal(TreeNode* node, queue<TreeNode*>& q) {
        if (!node) return;
        InorderTraversal(node->left, q);
        q.push(node);
        InorderTraversal(node->right, q);
    }

    TreeNode* increasingBST(TreeNode* root) {
        queue<TreeNode*> q;
        InorderTraversal(root, q);

        TreeNode* dummy = new TreeNode(-1);
        TreeNode* current = dummy;

        while (!q.empty()) {
            current->right = q.front();
            q.pop();
            current = current->right;
            current->left = nullptr;
        }

        return dummy->right;
    }
};

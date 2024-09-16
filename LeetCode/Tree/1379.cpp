#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* dfs(TreeNode* node,int value){
        if(!node) return NULL;
        if(node->val==value) return node;
        TreeNode* temp;
        if(node->left) temp = dfs(node->left,value);
        if(temp) return temp;
        if(node->right) temp = dfs(node->right,value);
        if(temp) return temp;
        return NULL;
    }

    TreeNode* bfs(TreeNode* node,int value){
        queue<TreeNode*> queue1;
        if(node) queue1.push(node);
        while(!queue1.empty()){
            TreeNode* temp = queue1.front();
            queue1.pop();
            if(temp->val==value) return temp;
            if(temp->left) queue1.push(temp->left);
            if(temp->right) queue1.push(temp->right);
        }
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return bfs(cloned,target->val);
    }
};
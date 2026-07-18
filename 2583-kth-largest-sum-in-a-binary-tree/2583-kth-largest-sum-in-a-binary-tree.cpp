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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        if(root == NULL){
            return 0;
        }
        vector<long long>vec;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            long long sum = 0;
            for(int i=0;i<size;i++){
                TreeNode* fr = q.front();
                sum += fr->val;
                q.pop();
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
            }
            vec.push_back(sum);
        }
        if(vec.size() < k){
            return -1;
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        return vec[k-1];
    }
};
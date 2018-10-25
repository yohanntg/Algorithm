 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {

        if(pre.size()==0 || vin.size() == 0){
            return NULL;
        }
        TreeNode* root = new TreeNode(pre[0]);
        vector<int> pre_left,pre_right,vin_left,vin_right;
        int vin_root;
        for(int i=0;i<vin.size();i++){
            if(vin[i] == pre[0]){
                vin_root = i;
                break;
            }
        }

        for(int i=0;i<(vin_root);i++){
            vin_left.push_back(vin[i]);

        }
        for(int i=vin_root+1;i<vin.size();i++){
            vin_right.push_back(vin[i]);
        }

        for(int i=1;i<(vin_root+1);i++){
            pre_left.push_back(pre[i]);
        }

        for(int i=vin_root+1;i<pre.size();i++){
            pre_right.push_back(pre[i]);
        }


        root->left = reConstructBinaryTree(pre_left,vin_left);
        root->right = reConstructBinaryTree(pre_right,vin_right);

        return root;

    }
};

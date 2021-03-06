/*
* @Author: yufeng
* @Date:   2018-10-11 23:26:35
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-11 23:27:02
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot) {
        return isSymmetrical(pRoot,pRoot);
    }

    bool isSymmetrical(TreeNode* pRoot1,TreeNode* pRoot2) {
        if(pRoot1 == nullptr && pRoot2 == nullptr) {
            return true;
        }
        if(pRoot1 == nullptr || pRoot2 == nullptr || pRoot1 -> val != pRoot2 -> val) {
            return false;
        }
        return isSymmetrical(pRoot1->left,pRoot2->right) && isSymmetrical(pRoot2->right,pRoot1->left);
    }

};
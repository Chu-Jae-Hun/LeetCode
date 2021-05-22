int result[10000];
int cnt;
void inorder(struct TreeNode* root) //정렬하고 찾을 것임(중위)
{
    if(!root)
        return;
    
    if(root->left != NULL)
        inorder(root->left);
    result[cnt++] = root->val;
    if(root->right != NULL)
        inorder(root->right);
}

int kthSmallest(struct TreeNode* root, int k)
{
    cnt = 0;
    inorder(root);
    return result[k-1];
}

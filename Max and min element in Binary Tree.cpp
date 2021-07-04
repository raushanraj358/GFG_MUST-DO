class Solution
{
public:
    int findMax(Node *root)
    {
       if(root == NULL){
           return -1;
       }
       while(root->right != NULL){
           root = root->right;
       }
       return root->data;
    }
    int findMin(Node *root)
    {
        if(root == NULL){
            return -1;
        }
        else if(root->left == NULL){
            return root->data;
        }
        else {
            return findMin(root->left);
        }
    }
};

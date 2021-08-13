class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void compute(vector<int> &res,Node* root,int level, int *max_level){
        if(root == NULL){
            return;
        }
        if(*max_level<level){
            res.push_back(root->data);
            *max_level = level;
        }
        compute(res,root->right,level+1,max_level);
        compute(res,root->left,level+1,max_level);
        
    }
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       int level = 0;
       int max_level = -1;
       compute(ans,root,level,&max_level);
       return ans;
    }
};

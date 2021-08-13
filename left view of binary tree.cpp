void compute(vector<int>&res,Node* root,int level,int *max_level){
    if(root == NULL){
        return;
    }
    if(*max_level<level){
        res.push_back(root->data);
        *max_level = level;
    }
    compute(res,root->left,level+1,max_level);
    compute(res,root->right,level+1,max_level);
}
vector<int> leftView(Node *root)
{
    vector<int> ans;
    int level = 0;
    int max_level = -1;
    compute(ans,root,level,&max_level);
    return ans;
   // Your code here
}

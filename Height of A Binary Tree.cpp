
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        int l,r;
        
        if(node == NULL){
            return 0;
        }
        else{
             l = height(node->left);
             r = height(node->right);
      
        }
          return max(l,r) + 1;
        
        // code here 
    }
};

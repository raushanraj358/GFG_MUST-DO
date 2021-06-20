class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
      Node*Current = head;
       Node*prev = NULL;
       Node*n;
       while(Current!=NULL){
           n= Current->next;
           Current->next =prev;
           prev =Current;
           Current =n;
        }
        head = prev;
        return head;   

    }
    
};

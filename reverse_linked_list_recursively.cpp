class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
      if(head->next==NULL or head == NULL){
          return head;
      }  
      Node* smallhead = reverseList(head->next);
      Node* Current = head;
      Current->next->next = Current;
      Current->next = NULL;
      return smallhead;

    }
    
};
    
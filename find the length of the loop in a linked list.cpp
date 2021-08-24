/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
int count(struct Node* n){
    struct Node *temp = n;
    int count = 1;
    while(temp->next!=n){
        count++;
        temp = temp->next;
        
    }
    return count;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
   struct Node *slow,*fast;
   slow = fast = head;
   while(slow && fast && fast->next){
       slow = slow->next;
       fast = fast->next->next;
       if(slow == fast){
           return count(slow);
       }
   }
   return 0;
   
}

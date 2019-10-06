/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *prev   = NULL;                        //pointer at previous node
    Node *current = head;                       //pointer at current node
    Node *next;                                 //pointer at next node
    while (current != NULL) {                   //loop till current node is not NULL 
        next = current -> next;                 //make 'next' pointer hold next node of current pointer
        current -> next = prev;                 //change pointer direction
        prev = current;                         //now make 'prev' pointer hold position of current
        current = next;                         //now make 'current' pointer hold position of next
    }
    head = prev;                                //setting head of new formed linked list
    return head;                            
}

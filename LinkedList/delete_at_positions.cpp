/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    int k =0;
    struct Node* p = head;
    if(position == 0)
    {
        head = head->next;
        return head;
    }
   while(--position > 0)
    p=p->next;
    p->next = p->next->next;
    return head;
}

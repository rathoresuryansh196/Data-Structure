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
void ReversePrint(Node *head)
{
    struct Node* curr , *next , *prev;
    prev = NULL;
    curr = head;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = curr;
    while(head!=NULL)
    {
        cout << head->data <<endl;
        head = head->next;
    }
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node* k;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    k= head;
    if(head == NULL)
    {
        return temp;
    }
    else
    {
    while(k->next!=NULL)
     k = k->next;
    k->next = temp;
    return head;
    }
}

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
    int arr[10000];
    struct Node* p = head;
    int i=0,k=0;
    if(p==NULL)
        return ;
    while(p!=NULL)
    {
        arr[i]=p->data;
        p=p->next;
        k++;
        i++;
    }
    for(int i=k-1;i>=0;i--)
        cout << arr[i] << endl;
}
    
    

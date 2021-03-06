#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
void push(struct node** head_ref, int new_data)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
int GetNth(struct node* head, int index);
/* Driver program to test above function*/
int main(){
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct node *head = NULL;
        
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }
   
    cout<<GetNth(head, n-k);
    }
    return 0;
}
 

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Print he nth node in the linked list Node is defined as 
struct node
{
    int data;
    struct node* next;
}; */
// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
    node* temp = head;
    while(temp && temp->next && index){
        temp=temp->next;
        index--;
    }
    return temp->data;
  // Code here
}
#include<bits/stdc++.h>
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */

void push(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

/* Counts no. of nodes in linked list */
int getCount(struct node* head);
int main(){
    int T,i,n,l;
    scanf("%d",&T);
    while(T--){
        struct node *head = NULL;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&l);
            push(&head,l);
        }
        /* Check the count function */
        printf("%d",getCount(head));
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/
int getCount(struct node* head){
    struct node* temp = head;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
//Code here
}


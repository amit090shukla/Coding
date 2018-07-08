#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */

int getLen(Node* head){
    Node* temp = head;
    int c=0;
    if(head==NULL)
        return 0;
    while(temp){
        c++;
        temp = temp->next;
    }
    return c;
}

int getIntersection(int d, Node* big, Node* small){
    Node* current1 = big;
    Node* current2 = small;
    for(int i = 0; i < d; i++){
        if(current1 == NULL){  
            return -1;
        }
        current1 = current1->next;
    }
    while(current1 && current2){
        if(current1 == current2)
            return current1->data;
        current1= current1->next;
        current2= current2->next;
    }
    return -1;
}

int intersectPoint(Node* head1, Node* head2)
{
    int l1 = getLen(head1);
    int l2 = getLen(head2);
    int d = abs(l1-l2);
    if(l1>l2){
        return (getIntersection(d,head1,head2));
    }
    else if(l1<l2){
        return (getIntersection(d,head2,head1));
    }
    // else{
    //     Node* t1 = head1;
    //     Node* t2 = head2;
    //     while(t1 && t2){
    //         if(t1==t2)
    //             return t1->data;
    //         t1 = t1->next;
    //         t2 = t2->next;
    //     }
    // }
    // return -1;
    // Your Code Here
}
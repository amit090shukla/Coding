/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/

/* Driver program to test above function*/
#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};

Node* deleteNode(Node *head,int x)
{
    Node* temp = head;
    Node* prev = NULL;
    int pos=1;
    if(x==1){
        head = temp->next;
        return head;
    }
    while(temp && pos!=x){
        prev = temp;
        temp=temp->next;
        pos++;
    }
    prev->next = temp->next;
    return head;
    //Your code here
}

void printList(Node *head){
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << " ";
}


void append(struct Node** head_ref, struct Node **tail_ref, int new_data){
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

int main(){
  int T,i,n,l;
  // TO BE REMOVED
  for (int i=0; i<2000; i++);
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

// Linked List Implementation using structure

// Node of LL
struct Node{
    int data;
    Node* next;
};

void push(Node* &head, int data){
    Node* nn = new Node; // Created a New Node
    nn->data = data;
    nn->next = head;
    head = nn;
}

Node* construct(vector<int>arr,int n){
    Node* head = nullptr;

    for(int i=n-1;i>=0;i--){
        push(head,arr[i]);
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    // Construct LL and return head
    Node* head = construct(arr,n);
    // Print LL
    printLL(head);
}
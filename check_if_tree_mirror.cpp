#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int key;
	struct Node* left, *right;
};
Node *newNode(int key)
{
	Node *temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return (temp);
}
bool isSymmetric(struct Node* root);
void inorder(struct Node *root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->key<<' ';
    inorder(root->right);
}
int main()
{
  int t;
  struct Node *child;
  cin>>t;
  while (t--)
  {
     int N1, N2;
     cin>>N1>>N2;
     struct Node *root1 = NULL;
     struct Node *root2 = NULL;
     struct Node *root = NULL;
     map<int, Node*> m;
     while (N1--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root1 == NULL)
             root1 = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     m.clear();
     while (N2--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root2 == NULL)
             root2 = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     int N;
     cin>>N;
     root = newNode(N);
     root->left=root1;
     root->right=root2;
     //inorder(root);
     if(isSymmetric(root))cout<<"True"<<endl;
     else cout<<"False"<<endl;
  }
  return 0;
}
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the tree is as
struct Node
{
	int key;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not
bool check(Node* n1, Node* n2){
    if(n1==NULL && n2==NULL)
        return true;
    if(n1->key==n2->key){
        return check(n1->left,n2->right) && check(n1->right,n2->left);
    }
    return false;
}
bool isSymmetric(struct Node* root)
{
    Node* n1 = root;
    Node* n2 = root;
    return check(n1,n2);
	// Code here
}
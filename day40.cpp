#include<bits/stdc++.h>
using namespace std;

// Find a duplicate element in a limited range array --- Using XOR

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    int x=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        x=x^arr[i];
    }
    for(i=1;i<n;i++)
        x^=i;
    cout<<"Duplicate element is "<<x<<endl;
}
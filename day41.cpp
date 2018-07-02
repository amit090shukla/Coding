#include<bits/stdc++.h>
using namespace std;

// Find a duplicate element in a limited range array --- Using XOR

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        // 1 2 3 4 4
        if(arr[abs(arr[i])-1] > 0)
            arr[abs(arr[i])-1] = -1*arr[abs(arr[i])-1];
        else{
            cout<<"Repeated element is "<<abs(arr[i])<<endl;
        } 
    }
}
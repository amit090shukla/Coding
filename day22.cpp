#include<bits/stdc++.h>
using namespace std;

// Sort a binary array in linear time

main(){
    int n,i,k;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    k=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[k],arr[i]);
            k++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
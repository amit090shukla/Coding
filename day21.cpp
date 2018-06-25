#include<bits/stdc++.h>
using namespace std;
//  Rearrange the array with alternate high and low elements.
main(){
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i+=2){
        if(arr[i]<arr[i-1]){
            swap(arr[i-1],arr[i]);
        }
        if(i+1<n && arr[i+1]>arr[i]){
            swap(arr[i+1],arr[i]);
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
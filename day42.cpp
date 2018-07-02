#include<bits/stdc++.h>
using namespace std;

// Place array values at correct indices

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    i=0;
    while(i<n){
        if(arr[i]==-1 || arr[i]==i){
            i++;
        }
        else{
            swap(arr[i], arr[arr[i]]);
        }
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
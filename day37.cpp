#include<bits/stdc++.h>
using namespace std;

// Find maximum product of two integers in an array 

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    cout<<"Max product "<<(arr[0]*arr[1] > arr[n-1]*arr[n-2] ? arr[0]*arr[1] : arr[n-1]*arr[n-2])<<endl;
    
}
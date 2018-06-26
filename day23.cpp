#include<bits/stdc++.h>
using namespace std;

// Constant time range add operation on an array
// LINK : https://www.geeksforgeeks.org/constant-time-range-add-operation-array/

main(){
    int i,l,r,n,k,amt;
    // Initially All elements are zero
    // 0 0 0 0 0 0 - 2 4
    // 0 0 100 0 0 -100
    // 0 0 100 100 100 0
    cin>>n;
    vector<int>arr(n);
    vector<int>newArr(n,0);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    while(k--){
        cin>>l>>r>>amt;
        newArr[l]+=amt;
        if(r+1<n)
            newArr[r+1]-=amt;

    }
    for(i=1;i<n;i++){
        newArr[i]+=newArr[i-1];
    }
    for(i=0;i<n;i++)
        cout<<arr[i]+newArr[i]<<" ";
    cout<<endl;
}
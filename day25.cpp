#include<bits/stdc++.h>
using namespace std;

// Sort an array containing 0’s, 1’s and 2’s (Dutch national flag problem)

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int p = 1;
    int e=n-1;
    int s=0;
    i=0;
    // 0 1 2 2 1 0 0 2 0 1 1 0

    while(i<=e){
        if(arr[i]<p){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else if(arr[i]>p){
            swap(arr[i],arr[e]);
            e--;
        }
        else{
            i++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
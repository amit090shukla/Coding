#include<bits/stdc++.h>
using namespace std;

// Move all zeros present in the array to the end

/* Given an array of integers, move all zeros present in the array to the end. 
The solution should maintain the relative order of items in the array. */

main(){
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int p=0;
    i=0;
    while(i<n){
        if(arr[i]!=0){
            swap(arr[i],arr[p]);
            p++;i++;
        }
        else
            i++;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

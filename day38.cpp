#include<bits/stdc++.h>
using namespace std;

// Replace each element of the array with product of every other 
// element without using division operator

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    vector<int>left(n);
    vector<int>right(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    // Calculate left array sum

    // 1 2 3 4 5 = > 1 1 2 
    left[0]=1;
    for(i=1;i<n;i++){
        left[i] = arr[i-1] * left[i-1]; 
    }
    right[n-1]=1;
    for(i=n-2;i>=0;i--){
        right[i] = right[i+1]*arr[i+1];
    }
    for(i=0;i<n;i++){
        cout<<left[i] * right[i]<<endl;
    }
}
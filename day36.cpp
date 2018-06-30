#include<bits/stdc++.h>
using namespace std;

// Find maximum product of two integers in an array

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int maxP = INT_MIN;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]*arr[j]>maxP)
                maxP = arr[i]*arr[j];
        }
    }
    cout<<"Max product "<<maxP<<endl;
    
}
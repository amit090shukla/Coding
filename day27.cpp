#include<bits/stdc++.h>
using namespace std;

// Given an array of integers, find equilibrium index in it.

// PROBLEM 
/* For an array A consisting n elements, index i is an 
equilibrium index if sum of elements of sub-array */

main(){
    int n,i,j,sum=0;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int lsum=0,rsum;
    for(i=0;i<n;i++){
        int tsum = sum-arr[i];
        rsum = tsum-lsum;
        if(lsum==rsum)
            cout<<"Index "<<i<<endl;
        lsum+=arr[i];
    }
}

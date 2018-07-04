#include<bits/stdc++.h>
using namespace std;

// Maximum Sum Circular Subarray
int kadane(vector<int>&arr, int n){
    // Global max
    int max_so_far =0;
    // Local max till current
    int max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here+=arr[i];
        if(max_ending_here<0)
            max_ending_here=0;
        max_so_far = max(max_so_far,max_ending_here);
    }
    return max_so_far;
}

int kadaneCircular(vector<int>&arr, int n){
    // Negate all the array
    for(int i=0;i<n;i++){
        arr[i]=-arr[i];
    }

    int negMax = kadane(arr,n);

    // Restore array
    for(int i=0;i<n;i++){
        arr[i]=-arr[i];
    }

    int sum=0;

    for(int i=0;i<n;i++)
        sum+=arr[i];
    
    return max(kadane(arr,n), sum + negMax);
}

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of subarry with largest sum in a circular array is "<<kadaneCircular(arr,n)<<endl;
}
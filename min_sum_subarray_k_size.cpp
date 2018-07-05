#include<bits/stdc++.h>
using namespace std;

// Given an array of integers, find minimum sum sub-array of given size k.


void minSumSubarray(vector<int> &arr, int n,int k){
    int left=0;
    int minSum = INT_MAX;
    int sum=0;
    int count=0;
    if(k>n){
        cout<<"Not possible"<<endl;
        return;
    }
        
    for(int right=left; right<n; right++){
        sum+=arr[right];
        count++;
        while(count>k){
            sum-=arr[left];
            count--;
            left++;
        }
        if(count==k && sum < minSum){
            minSum = sum;
        }
    }
    cout<<minSum<<endl;
    return;
}

main(){
    int n,k,i,j;
    cin>>n>>k;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    minSumSubarray(arr,n,k);
}
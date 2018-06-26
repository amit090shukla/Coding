#include<bits/stdc++.h>
using namespace std;

// Shuffle a given array of elements (Fisher–Yates shuffle)

// Problem Statement
/*
Given an array of integers, in-place shuffle it. 
The algorithm should produce an unbiased permutation 
i.e. every permutation is equally likely. */
void swapRandom(vector<int>&arr,int n){
    for(int i=n-1;i>=1;i--){
        // Generate a random number j such that 0 <= j <= i
        int j = rand()%(i+1);
        swap(arr[i],arr[j]);
    }
}

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    srand(time(NULL));

    swapRandom(arr,n);
    //Print shuffled array
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
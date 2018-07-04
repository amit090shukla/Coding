#include<bits/stdc++.h>
using namespace std;

// Given an array of integers, find all distinct combinations of given length.

void printAllCombination(vector<int>&arr, string out, int n,int k,int pos){
    
    /* Exit Conditions */
    if(k>n)
        return;
    if(k==0){
        cout<<out<<endl;
        return;
    }
    //---------------------
    // Recursive steps
    for(int j=pos;j<n;j++){
        printAllCombination(arr,out+" "+to_string(arr[j]),n,k-1,j+1);
    }

}

main(){
    int n,i,j,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int pos=0;
    printAllCombination(arr,"",n,k,pos);
}
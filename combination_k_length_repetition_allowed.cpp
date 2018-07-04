#include<bits/stdc++.h>
using namespace std;

//Given an array of integers, 
//find all distinct combinations of given length where repetition of elements is allowed.

void printArray(vector<int>&brr){
    for(auto it=brr.begin();it!=brr.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
}

void printAllSubsets(vector<int>&arr, vector<int>&brr, int k, int n, int i){

    // Base case
    if(brr.size()==k){
        printArray(brr);
        return;
    }

    // Recursive Statement

    for(int j=i;j<n;j++){

        // 1. Push Current 
        brr.push_back(arr[j]);
        //2. Go for recursion
        printAllSubsets(arr,brr,k,n,j);
        //3. Pop the element
        brr.pop_back();
    }
    return;

}
main(){
    int n,i,k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>brr;
    for(i=0;i<n;i++)
        cin>>arr[i];
    i=0;
    printAllSubsets(arr,brr,k,n,i);
}
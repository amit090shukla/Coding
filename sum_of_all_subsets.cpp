#include<bits/stdc++.h>
using namespace std;

// Print sums of all subsets of a given set

// RECURSIVE SOLUTION

void printAllSubsetSum(vector<int>&arr,int l,int r,int sum=0){
    if(l>r){
        cout<<sum<<endl;
        return;
    }

    // Including arr[i]
    printAllSubsetSum(arr,l+1,r, sum+arr[l]);

    // Excluding arr[i]
    printAllSubsetSum(arr,l+1,r,sum);
}
main(){
    int i,n,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    printAllSubsetSum(arr,l,r);

}
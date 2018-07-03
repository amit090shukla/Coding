#include<bits/stdc++.h>
using namespace std;

// Find the smallest positive integer value that cannot be
//represented as sum of any subset of a given array

int findSmallest(vector<int>&arr,int n){
    int res = 1;
    for(int i=0;i<n;i++){
        if(arr[i] <= res)
            res+=arr[i];
        else{
            return res;
        }
    }
    return res;
}
main(){
    // Elements are already sorted
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Smallest +ve no that can't be represented is "<<findSmallest(arr,n)<<endl;
}
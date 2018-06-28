#include<bits/stdc++.h>
using namespace std;

// Inplace merge two sorted arrays

void printArray(vector<int>&arr, vector<int>&brr,int n,int m){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)
        cout<<brr[i]<<" ";
    cout<<endl;
    return;
}

void sortArrays(vector<int>&arr, vector<int>&brr,int n,int m){
    // X[] = 1 4 7 8 10
    // Y[] = 2 3 9
    int p=0;
    for(int i=0;i<n;i++){
        if(arr[i]>brr[0]){
            swap(arr[i],brr[0]);
            int sm = brr[0];
            // Now fix brr[0] which is = sm
            int j=0;
            for(j=1;j<m&&brr[j]<sm;j++){
                brr[j-1]=brr[j];
            }
            brr[j-1]=sm;
        }
    }
}

main(){
    int n,m,i,j,k;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>brr[i];
    sortArrays(arr,brr,n,m);
    printArray(arr,brr,n,m);

}
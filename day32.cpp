#include<bits/stdc++.h>
using namespace std;

// Find peak element in an array

int findPeak(vector<int>&arr, int n){
    int l = 0;
    int h = n-1;
    while(l<=h){
        cout<<"A"<<endl;
        int m = l + (h-l)/2;
        // Exit Condition
        if(m==0 && arr[m+1]<arr[m]){
            return arr[m];
        }
        if(m==n-1 && arr[m]>arr[m-1]){
            return arr[m];
        }
        if((m+1) <n && (m-1) >=0 && arr[m]>arr[m+1] && arr[m]>arr[m-1]) {
            return arr[m];
        }
        if((m-1)>=0 && arr[m-1]>arr[m]){
            h=m-1;
        }
        else if(m+1<n && arr[m+1]>arr[m]){
            l=m+1;
        }
    }
}

main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findPeak(arr,n);
}
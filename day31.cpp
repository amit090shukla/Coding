#include<bits/stdc++.h>
using namespace std;

// Merge two arrays by satisfying given constraints
// LINK : http://www.techiedelight.com/merge-two-arrays-satisfying-given-constraints/

main(){
    int m,n,i,j=0,c=0;
    cin>>m>>n;
    vector<int>arr(m);
    vector<int>brr(n);
    // M > N
    for(i=0;i<m;i++){
        cin>>arr[i];
        if(arr[i]==0)
            c++;
    }
    j=m-1;
    i=m-1;
    while(i>=0){
        if(arr[i]==0){
            i--;
        }
        else{
            swap(arr[i],arr[j]);
            j--;
            i--;
        }
    }
    for(i=0;i<n;i++)
        cin>>brr[i];
    j=0;
    i=c;
    int t=0;
    while(i<m && j<n){
        if(brr[j]<arr[i]){
            swap(arr[t],brr[j]);
            t++;j++;
        }
        else{
            swap(arr[i],arr[t]);
            i++;t++;
        }
    }
    if(i==m && j<n){
        for(i=t;i<m && j<n;i++,j++){
            arr[i] = brr[j];
        }
    }
    
    for(i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}
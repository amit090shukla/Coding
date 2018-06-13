#include<bits/stdc++.h>
using namespace std;
// Calculate frequency of all elements present in an array of specified range
main(){
    int i,j,n;
    cin>>n;
    vector<int>arr(n);
    vector<int>store(n,0);
    vector<int>::iterator p;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        store[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->"<<store[i]<<" "<<endl;
    }
    return 0;
}
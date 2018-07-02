#include<bits/stdc++.h>
using namespace std;

// Find a duplicate element in a limited range array

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>map;
    for(i=0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]++;
        if(map[arr[i]]==2){
            cout<<"Duplicate element is "<<arr[i]<<endl;
        }
    }

}
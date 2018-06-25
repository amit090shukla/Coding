#include<bits/stdc++.h>
using namespace std;

//Range Queries for Frequencies of array elements 

main(){
    int i,j,n,k,l,r,num;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,vector<int> >mp;
    for(i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }
    cin>>k;
    for(i=0;i<k;i++){
        cin>>l>>r>>num;
        auto a = (lower_bound(mp[num].begin(), mp[num].end(), l));
        auto b = (upper_bound(mp[num].begin(), mp[num].end(), r));
        cout<<b-a<<endl;
    }
    
}
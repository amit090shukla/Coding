#include<bits/stdc++.h>
using namespace std;


// Given an Array, print all subarrays with 0 sum

main(){
    int i,j,n;
    cin>>n;
    pair<int,int>p;
    vector<pair<int,int> >res;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    int sm=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
        if(mp.find(sm)!= mp.end()){
            p.first = mp[sm]+1;
            p.second = i;
            res.push_back(p);
        }
        else{
            mp[sm] = i;
        }
    }
    for(i=0;i<res.size();i++){
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }
    return 0;
}
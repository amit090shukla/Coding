#include<bits/stdc++.h>
using namespace std;

// Given an array of integers, find maximum length sub-array having given sum.

void findMaxSum(vector<int> &arr, int n, int sum){
    unordered_map<int,int> mp;
    mp[0]=-1;
    int last=-1;
    int s=0;
    int len=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(mp.find(s) == mp.end()){
            mp[s]=i;
        }

        if(mp.find(s-sum)!=mp.end() && len < i - mp[s-sum]){
            len = i-mp[s-sum];
            last = i;
        }
    }
    cout<<"["<<(last-len+1)<<", "<<last<<"]"<<endl;
}
main(){
    int n,i,sum=0;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>sum;
    findMaxSum(arr,n,sum);
}
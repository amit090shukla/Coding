#include<bits/stdc++.h>
using namespace std;

// Find maximum length sub-array having equal number of 0’s and 1’s


void findLargestSubarray(vector<int>&arr,int n){
    unordered_map<int,int>map;
    map[0]=-1;
    int len=0;
    int sum=0;
    int last=-1;
    for(int i=0;i<n;i++){
        sum+=(arr[i]==0) ? -1:1;
        if(map.find(sum)!=map.end()){
            if(len<i-map[sum]){
                len=i-map[sum];
                last=i;
            }
        }
        else{
            map[sum]=i;
        }
    }

    if(last!=-1){
        cout<<"["<<last-len+1<<", "<<last<<"]"<<endl;
    }
    else{
        cout<<"No Subarray exist"<<endl;
    }
}
main(){
    int n,m,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    findLargestSubarray(arr,n);

}
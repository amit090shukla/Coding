#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lar = arr[n-1];
    int sm = arr[0];   
    int k=lar+1;
    int s=0,e=n-1;
    // 1 2 3 4 5 
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=arr[e]%k*k;
            e--;
        }
        else{
            arr[i]+=arr[s]%k*k;
            s++;
        }
    }
    for(int i=0;i<n;i++)
        arr[i]=arr[i]/k;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
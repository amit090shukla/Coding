#include<bits/stdc++.h>
using namespace std;

// Find maximum length sub-array having given sum

void findLen(vector<int>&arr, int n,int sum){
    int last=-1;
    int len=0;
    
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==sum){
                if(len < j-i+1){
                    len=j-i+1;
                    last=j;
                }
            }
        }
    }

    cout<<last-len+1<< " "<<last<<endl;
    return;

}

main(){
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    findLen(arr,n,sum);
    
}
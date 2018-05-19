#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int isum=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        isum+=i*arr[i];
    }
    int mval = isum;
    for(int i=0;i<n-1;i++){
        isum = isum - sum + (n)*arr[i];
        if(isum>mval)
            mval = isum;
    }
    cout<<mval<<endl;
    return 0;

}


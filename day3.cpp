#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int l=0,h=n-1,m=0,bp=0;
    while(l<=h){
        m = l+(h-l)/2;
        // 15 18 1 2 3 4
        // 1 2 3 4 5 6
        if(arr[m]>arr[m+1]){
            bp = m;
            break;
        }
        if(arr[l]>arr[m])
            h=m;
        if(arr[h]<arr[m])
            l=m;
        if(arr[l]<arr[m]&&arr[m]<arr[h]){
            cout<<0<<endl;
            return 0;

        }
    }
    cout<<bp+1<<endl;
    return 0;
}

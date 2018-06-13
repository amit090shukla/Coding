#include<bits/stdc++.h>
using namespace std;
// Calculate frequency of all elements present in an array 
//of specified range in linear time and using constant space

// n = 4 ---- 0 1 1 2  -- 4 9 4

main(){
    int i,j,n;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for(i=0;i<n;i++){
        cout<<i<<"->"<<arr[i]/n<<endl;
    }
    return 0;
}
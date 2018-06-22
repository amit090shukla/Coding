#include <bits/stdc++.h>
using namespace std;

// Find unique pairs with same sum in inordered array
int main() {
    int n,i,k;
    cin>>n>>k;
    vector<int>arr(n);
    set<int>st;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        int toFind = k-arr[i];
        if(st.find(toFind)!=st.end()){
            cout<<"Pair found "<<arr[i] <<" and"<<toFind<<endl;
            st.insert(arr[i]);
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// Given an array of integers, check if array contains a sub array with zero sum

int main() {
    int i,n;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    unordered_set<int>st;
    st.insert(0);
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
        if(st.find(sum) !=st.end()){
            cout<<"Exists"<<endl;
            return 0;
        }
        else{
            st.insert(sum);
        }
            
    }
    cout<<"No zero sum"<<endl;
    return 0;
}

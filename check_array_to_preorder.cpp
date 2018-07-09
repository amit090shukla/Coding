#include <bits/stdc++.h>
using namespace std;


bool isPossiblePreOrder(vector<int>&arr, int n){
    stack<int>st;
    int root = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<root)
            return false;
        while(!st.empty() && st.top()<arr[i]){
            root = st.top();
            st.pop();
            
        }
        st.push(arr[i]);
    }
    return true;
}
int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        if(isPossiblePreOrder(arr,n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
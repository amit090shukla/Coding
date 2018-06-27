#include<bits/stdc++.h>
using namespace std;

// Find majority element in an array (Boyer–Moore majority vote algorithm)

/* Given an array of integers containing duplicates, return the majority element 
in an array if present. A majority element appears more than n/2 times where n is 
the size of the array. */

main(){
    int n,i,majGuess,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        majGuess = arr[0];
        int count=0;
        for(i=0;i<n;i++){
            if(count==0)
                majGuess = arr[i];
            if(arr[i]==majGuess)
                count++;
            else{
                count--;
            }
        }
        int k=0;
        for(i=0;i<n;i++){
            if(arr[i]==majGuess)
                k++;
        }
        if(k>n/2)
            cout<<majGuess<<endl;
        else
            cout<<"NO Majority Element"<<endl;
    }
    

}
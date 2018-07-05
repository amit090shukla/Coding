#include<bits/stdc++.h>
using namespace std;

// Find the maximum sequence of continuous 1’s that can be formed by replacing at-most k zeroes by ones

int getMaxSeqLen(vector<int>&arr, int n, int k){

    int left=0; // Stores the left index of current windows
    int count=0; // Stores no of 0s in current window
    int window = 0; // Stores max no of 1s sequence formed
    int leftIndex=0; // Stores left index of max window till now

    for(int right=left;right<n;right++){
        if(arr[right]==0)
            count++;
        while(count > k){
            if(arr[left]==0)
                count--;
            left++;
        }

        if(right - left + 1 > window){
            window = right-left+1;
            leftIndex = left;
        }
    }

    cout<<"Longest sequence has length "<<window<<" from ["<<leftIndex<<", "<<(leftIndex+window-1)<<"]"<<endl;
}
main(){
    int n,k,i,j;
    cin>>n>>k;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Max sequence of continuous 1's will be "<<getMaxSeqLen(arr,n,k);
}
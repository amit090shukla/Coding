#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<int>arr(26,0);
    if(s1.length()!=s2.length()){
        cout<<"Not anagram"<<endl;
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        arr[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        arr[s2[i]]--;
    }
    for(int i=0;i<s1.length();i++){
        if(arr[i]!=0){
            
        }
    }
    cout<<"Anagram"<<endl;
    return 0;
}
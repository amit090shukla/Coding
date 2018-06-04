#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    vector<int>arr(26,0);
    if(s1.length()!=s2.length()){
        cout<<"Not anagram"<<endl;
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        arr[int(s1[i])-97]++;
    }
    for(int i=0;i<s2.length();i++){
        arr[int(s2[i])-97]--;
    }
    for(int i=0;i<s1.length();i++){
        if(arr[i]!=0){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram"<<endl;
    return 0;
}
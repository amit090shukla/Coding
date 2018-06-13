#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()>128){
        cout<<"Not unique"<<endl;
        return 0;
    }
    vector<int>arr(128,0);
    for(int i=0;i<s.length();i++){
        if(arr[int(s[i])]==0){
            arr[int(s[i])]++;
        }
        else{
            cout<<"Not unique"<<endl;
            return 0;
        }
    }
    cout<<"Unique"<<endl;
    return 0;
}
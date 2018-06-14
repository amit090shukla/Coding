#include<bits/stdc++.h>
using namespace std;
// Find no of people in a room that are required to make the
// probabilty of 2 people having same birthday atleast 50%

main(){
    float p=1;
    int n=365;
    int d = 365;
    int people=1;
    while(p>0.5){
        p = p*(--n)/d;
        people++;
        cout<<p<<endl;
    }
    cout<<people<<endl;
}
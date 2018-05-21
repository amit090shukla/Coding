/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,H,X,Z;
    cin>>t;
    while(t--){
        cin>>H>>X>>Z;
        int t = X/Z;
        int t2 = sqrt(2*H/32);
        if(t>t2){
            cout<<"Raj"<<endl;
        }
        else{
            cout<<"Rahul"<<endl;
        }
    }
    return 0;
}
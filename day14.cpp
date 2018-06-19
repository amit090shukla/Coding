#include<bits/stdc++.h>
using namespace std;

// SPOJ Problem : ACMCEG2B - FIGUREFUL
// Problem Statement

// Don and his friends had some sort of code word to describe the girls who pass towards their class.
// Anitha passed - killer told.. “Dude, 5 2 is going”
// Chitra passed - Jumbo told.. “Dude, 6 4 is awesome”
// Divya passed - Baabi told.. “Machi 1 6 is my dream girl”
// Girls couldn’t understand those code words. To crack the code word, girls decide to record all the code words and the girls' name whenever they call.
// The silencer in the class watched all these and got angry. He mugged up all the code words, went to teacher and complained about the naughty boys and naughty girls.
// Teacher : Who is the girl with code word 1 6?
// Silencer: Divya
// Teacher: Who is the girl with code word  5 2?
// Silencer: Anitha
// Teacher: What is the code word for me??
// Silencer: (puzzled)
// Now you have to pretend that you are the Silencer to solve this problem. Record the code words and answer the questions the teacher asks you.(She may ask the same question any number of times)

main(){
    typedef pair<int,int> ii;
    int n,i,t;
    cin>>n;
    map<ii,string> m;
    for(i=0;i<n;i++){
        ii code;
        string name;
        cin>>code.first>>code.second;
        cin>>name;
        m[code] = name;
    }
    cin>>t;
    while(t--){
        ii code;
        cin>>code.first>>code.second;
        cout<<m[code]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// GCD of 2 numbers
int gcd(int n,int m){
    if(!n)
        return m;
    gcd(m%n,n);
}
main(){
    int n,m,i;
    cin>>n>>m;
    //Using STL function
    cout<<"GCD of "<<n<< " and "<<m<<" using STL is "<<__gcd(n,m)<<endl;
    // GCD using function
    cout<<"GCD of "<<n<< " and "<<m<<" using function is "<<gcd(n,m)<<endl;
    
}
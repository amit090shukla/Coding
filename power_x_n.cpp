#include<bits/stdc++.h>
using namespace std;
int power(int x, int n) { // x^n
    // x = 2 y = 3
    if(n==0)
        return 1;
    int ans = power(x,n/2);
    if(n%2==0)
        return ans*ans;
    else{
        return x*ans*ans;
    }
    // If even -> return power(x,n/2) * power(x,n/2)
    // Else x * power(x,n/2)*power(x,n/2);

}

main(){
    int n,i,j,x;
    cin>>x>>n;
    cout<<power(x,n);
}
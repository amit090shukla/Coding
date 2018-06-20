#include <bits/stdc++.h>
using namespace std;
// SPOJ ---  DIVSUM - Divisor Summation


/* Given a natural number n (1 <= n <= 500000), please output the summation of all its proper divisors.

Definition: A proper divisor of a natural number is the divisor that is strictly less than the number.

e.g. number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.

 

Input
An integer stating the number of test cases (equal to about 200000), and that many lines follow, each containing one integer between 1 and 500000 inclusive.

Output
One integer each line: the divisor summation of the integer given respectively.*/

int main() {
    int j,t,n;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        if(n==1){
            cout<<0<<"\n";
        }
        else{
            for(j=2;j<=sqrt(n);j++){
                if(n%j==0){
                    if(j == n/j){
                        sum+=j;
                    }
                    else
                        sum = sum + j + n/j;
                }
            }
            cout<<sum+1<<"\n";
        }
    }
    return 0;
}

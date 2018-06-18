#include <bits/stdc++.h>
using namespace std;

//Find factorial of very big numbers which cant be calculated using long long int
void multiply(int *a, int &n,int no){
    int carry =0;
    for(int i=0;i<n;i++){
        int product = a[i]*no + carry;
        a[i] = product%10;
        carry=product/10;
    }
    while(carry!=0){
        a[n]=carry%10;
        carry=carry/10;
        n++;
    }
    return;
    
}
void big_factorial(int number){
    int *a = new int[100]{0};
    a[0]=1;
    int n=1;
    for(int i=2;i<=number;i++){
        multiply(a,n,i);
    }
    //Print
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){
    
    big_factorial(100);
    return 0;
}

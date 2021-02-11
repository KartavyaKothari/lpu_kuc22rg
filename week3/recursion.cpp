#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n<=1) return 1;
    int res = fact(n-1);
    return n*res;
}

int fibo(int n){
    // 1 1 2 3 5 8 13 21 34
    if(n==0 || n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n = 50;

    cout<<fact(n)<<endl;
    cout<<fibo(n)<<endl;
    // 10*fact(9)
    // 10*9*fact(8)
    // 10*9*8*fact(7)
    // .
    // .
    // .
    // .
    // 10*9*8*7*6*5*4*3*2*fact(1);
    // 10*9*8*7*6*5*4*3*2*1;

    return 0;
}
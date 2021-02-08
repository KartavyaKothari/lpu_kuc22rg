#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int max(double a, double b){
    return a>b?a:b;
}

int max(int a, int b, int c){
    return max(max(a,b),c);
}

int max(int a, int b, int c, int d){
    return max(max(a,b,c),d);
}

int max(int a, int b, int c, int d, int e){
    return max(max(a,b,c,d),e);
}

int main(){
    cout<<max(1.4,2.1)<<" "<<max(3,6,2)<<" "<<max(56 ,12, 45, 45)<<endl;
    return 0;
}
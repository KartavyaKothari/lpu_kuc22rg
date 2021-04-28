#include<bits/stdc++.h>
using namespace std;

template <class mytype>
mytype max_a(mytype a, mytype b){
    return (a>b?a:b);
}

// double max_a(double a, double b){
//     return (a>b?a:b);
// }

// char max_a(char a, char b){
//     return (a>b?a:b);
// }

int main(){
    cout<< (max_a(12,13))<<endl;
    cout<<max_a(12.4,12.1)<<endl;
    cout<<max_a('a','b')<<endl;
    return 0;
}
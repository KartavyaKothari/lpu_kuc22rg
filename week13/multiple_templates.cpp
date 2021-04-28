#include<bits/stdc++.h>
using namespace std;

template <class type1, class type2>
void max_a(type1 a, type2 b){
    cout<<(a>b?a:b)<<endl;
}

// double max_a(double a, double b){
//     return (a>b?a:b);
// }

// char max_a(char a, char b){
//     return (a>b?a:b);
// }

int main(){
    max_a(12.3,13);
    max_a('a',12.1);
    max_a('a','b');
    return 0;
}
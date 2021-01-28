#include<bits/stdc++.h>
using namespace std;

template <typename T>
void print_this(T x){
    cout<<x<<endl;
}

inline double pythagorus(double x, double y){
    return sqrt(x*x+y*y);
}

// void print_this(float x){
//     cout<<x<<endl;
// }

int main(){
    // print_this(12);
    // print_this("Hello");
    // print_this(3.14);

    for(int i = 0.0 ; i < 100000 ; i++){
        cout<<pythagorus(i,i+2);
    }

    return 0;
}
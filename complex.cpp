#include<bits/stdc++.h>
using namespace std;

struct CN{
    int r;
    int c;
};

struct CN add(struct CN a, struct CN b){
    struct CN res = {a.r+b.r,a.c+b.c};
    return res;
}

struct CN sub(struct CN a, struct CN b){
    struct CN res = {a.r-b.r,a.c-b.c};
    return res;
}

struct CN mul(struct CN a, struct CN b){
    struct CN res = {a.r*b.r-a.c*b.c,a.r*b.c+a.c*b.r};
    return res;
}

// struct CN div(struct CN a, struct CN b){
//     struct CN res = {a.r+b.r,a.c+b.c};
// }

void printCN(struct CN a){
    cout<<a.r<<" + "<<a.c<<"i"<<endl;
}

int main(){
    printCN(mul({3,2},{1,7}));

    return 0;
}
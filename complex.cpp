#include<bits/stdc++.h>
using namespace std;

struct CN{
    double r;
    double c;
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

struct CN div(struct CN a, struct CN b){
    struct CN res = {(a.r*b.r+a.c*b.c)/(b.r*b.r+b.c*b.c),(a.c*b.r-a.r*b.c)/(b.r*b.r+b.c*b.c)};
    return res;
}

void printCN(struct CN a){
    cout<<a.r<<" + "<<a.c<<"i"<<endl;
}

int main(){
    struct CN num1;
    num1.r = 7;
    num1.c = -6;
    
    printCN(div({7,-6},{2,-3}));
    
    // cout<<(11./2)<<endl;

    return 0;
}
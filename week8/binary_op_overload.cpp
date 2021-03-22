#include<bits/stdc++.h>
using namespace std;

class CN{
    public:
    double r;
    double c;

    CN(double r, double c):r(r),c(c){}

    CN operator+(const CN &n){
        double real = this->r + n.r;
        double compl = this->c + n.c;

        return CN(real,compl);
    }
};

// struct CN add(struct CN a, struct CN b){
//     struct CN res = {a.r+b.r,a.c+b.c};
//     return res;
// }

// struct CN sub(struct CN a, struct CN b){
//     struct CN res = {a.r-b.r,a.c-b.c};
//     return res;
// }

// struct CN div(struct CN a, struct CN b){
//     struct CN res = {(a.r*b.r+a.c*b.c)/(b.r*b.r+b.c*b.c),(a.c*b.r-a.r*b.c)/(b.r*b.r+b.c*b.c)};
//     return res;
// }

void printCN(CN a){
    cout<<a.r<<" + "<<a.c<<"i"<<endl;
}

int main(){
    CN num1(7,-6);
    CN num2(2,-3);

    printCN(num1+num2);
    // printCN(num2);
    
    return 0;
}
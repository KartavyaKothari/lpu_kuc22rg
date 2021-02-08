#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    double power_to(double a, double b){
        return pow(a,b);
    }

};

int main(){
    double a,b;
    char op;

    cin>>a>>op>>b;

    Calculator calc;

    switch (op){
        case '+':
            break;
        case '^':
            cout<<"a^b = "<<calc.power_to(a,b)<<endl;
            break;

        default:
            break;
    }

    return 0;
}
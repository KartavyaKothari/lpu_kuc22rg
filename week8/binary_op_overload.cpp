#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    public:
    double r;
    double c;
    ComplexNumber():r(0),c(0){}
    ComplexNumber(double r, double c):r(r),c(c){}

    void display(){
        cout<<r<<"+"<<c<<"i"<<endl;
    }

    ComplexNumber operator +(ComplexNumber b){
        double real = r+b.r;
        double comp = c+b.c;
        ComplexNumber res(real,comp);

        return res;
    }

    ComplexNumber operator -(ComplexNumber b){
        return ComplexNumber(r-b.r,c-b.c);
    }

    ComplexNumber operator /(ComplexNumber b){
        double real = (r*b.r+c*b.c)/(b.r*b.r+b.c*b.c);
        double comp = (c*b.r-r*b.c)/(b.r*b.r+b.c*b.c);
        ComplexNumber res(real,comp);

        return res;
    }

    // friend ostream& operator <<(ostream &out, ComplexNumber &c);
};

// ostream& operator <<(ostream &out, ComplexNumber &c){
//     out<<c.r<<"+"<<c.c<<"i"<<endl;
//     return out;
// }

int main(){
    ComplexNumber num1(3,4);
    ComplexNumber num2(1,2);

    ComplexNumber num3 = num1 + num2;
    ComplexNumber num4 = num1 - num2;
    ComplexNumber num5 = num1 / num2;
    
    num3.display();
    // cout<<num3;
    num4.display();
    num5.display();
}
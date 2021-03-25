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
};


int main(){
    ComplexNumber num1(3,4);
    ComplexNumber num2(1,2);

    ComplexNumber num3 = num1 + num2;
    ComplexNumber num4 = num1 - num2;
    
    num3.display();
    num4.display();
}
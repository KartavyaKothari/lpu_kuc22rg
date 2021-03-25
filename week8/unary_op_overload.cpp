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

    void operator ++(){
        r++;
        c++;
    }

    void operator --(){
        r--;
        c--;
    }
};

int main(){
    ComplexNumber num1(3,4);
    ComplexNumber num2(1,2);

    ++num1;
    num1.display();
    --num1;
    num1.display();
}
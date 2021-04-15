#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"A Constructor called with val "<<a<<endl;
    }
    ~A(){
        cout<<"A Destructor called"<<endl;
    }
};

class B{
    public:
    B(int b){
        cout<<"B Constructor called with val "<<b<<endl;
    }
    ~B(){
        cout<<"B Destructor called"<<endl;
    }
};

class C : public B, public A{
    public:
    C(int a, int b, int c):A(a),B(b){
        cout<<"C Constructor called with val "<<c<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"C Destructor called"<<endl;
    }
};

void func(){
    C c(1,2,3);
}

int main(){
    func();
}
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A Constructor called"<<endl;
    }
    ~A(){
        cout<<"A Destructor called"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"B Constructor called"<<endl;
    }
    ~B(){
        cout<<"B Destructor called"<<endl;
    }
};

class C : public B, public A{
    public:
    C(){
        cout<<"C Constructor called"<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"C Destructor called"<<endl;
    }
};

void func(){
    C c;
}

int main(){
    func();
}
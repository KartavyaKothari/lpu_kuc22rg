#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"C base"<<endl;
    }
    virtual ~Base(){
        cout<<"D base"<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"C derived"<<endl;
    }
    ~Derived(){
        cout<<"D derived"<<endl;
    }
};

int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}
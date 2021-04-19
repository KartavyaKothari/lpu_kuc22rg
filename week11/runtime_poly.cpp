#include<bits/stdc++.h>
using namespace std;

class Base{
    int arr[10000];
    public:
    virtual void print(){
        cout<<"Printing from base"<<endl;
    }
    void show(){
        cout<<"Showing from base"<<endl;
    }
};

class Derived : public Base{
    int arr[10000];
    public:
    void print(){
        cout<<"Printing from derived"<<endl;
    }
    void show(){
        cout<<"Showing from derived"<<endl;
    }
};

int main(){
    // Base *b
    Base *b = new Derived();
    b->show();
    b->print();
    cout<<endl;

    return 0;
}
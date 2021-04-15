#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor called"<<endl;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};

void func(){

}

int main(){
    A *a = new A[3];
    cout<<"***"<<endl;
    delete a;
    return 0;
}
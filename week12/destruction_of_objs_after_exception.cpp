#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int data;
    A(int d){
        data = d;
        cout<<"Cons "<<data<<endl;
    }
    ~A(){cout<<"Des "<<data<<endl;}
};

// Cons 1
// Cons 2
// Des 2
// Something
// Program end
// Des 1

int main(){
    A a(1);

    try{
        A b(2);
        throw 12;
    }catch(int e){
        cout<<"Something"<<endl;
    }

    cout<<"Program end"<<endl;

    return 0;
}
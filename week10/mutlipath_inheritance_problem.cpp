#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
};

class B: virtual public A{};
class C: public virtual A{};
class D:public B,public C{};

int main(){
    D obj_d;
    obj_d.B::a = 10;
    obj_d.C::a = 100;
    obj_d.a = 1000;

    cout<<obj_d.B::a<<" "<<obj_d.C::a<<endl;

    return 0;
}
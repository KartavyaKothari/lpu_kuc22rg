#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: protected A{
    // protected:
    // int b;
    // protected:
    // int c;

    public:
    B(){
        // cout<<a;
        cout<<b;
        cout<<c;
    }
};

class C: public B{
    // protected:
    // int b;
    // protected:
    // int c;
    public:
    C(){
        // cout<<a;
        cout<<b;
        cout<<c;
    }
};

int main(){
    A obj_a;
    cout<<obj_a.c;

    B obj_b;
    cout<<obj_b.c;

    C obj_c;
    cout<<obj_c.c;

    return 0;
}
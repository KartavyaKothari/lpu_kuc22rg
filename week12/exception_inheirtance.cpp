#include<bits/stdc++.h>
using namespace std;

class Base{
};

class Derived : public Base{
};

int main(){
    try{
        Derived a;
        throw a;
    }catch(Derived b){
        cout<<"Derived caught"<<endl;
    }catch(Base b){
        cout<<"Base caught"<<endl;
    }

    cout<<"Program end"<<endl;

    return 0;
}
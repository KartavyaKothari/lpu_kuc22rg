#include<bits/stdc++.h>
using namespace std;

class Living_thing{
    public:
    virtual void respiration() = 0;
    virtual void eat() = 0;
};

class Animal:public Living_thing{
    void respiration(){
        cout<<"Breathin in, breathing out"<<endl;
    }
    // void eat(){
    //     cout<<"Eating"<<endl;
    // }
};

class Human : public Animal{
    void eat(){
        cout<<"Eating"<<endl;
    }
};

int main(){
    // Animal a;
    Human h;
    return 0;
}
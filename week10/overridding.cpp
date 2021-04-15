#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eat anything that moves"<<endl;
    }
};

class Human : public Animal {
    public:
    void eat(){
        cout<<"Eat meat or vegetables"<<endl;
    }
};

class Vegetarian : public Human {
    public:
    void eat(){
        // Animal::eat();
        // Human::eat();
        cout<<"Eat vegetables"<<endl;
    }
};

int main(){
    // Animal a;
    // a.eat();
    // cout<<endl;
    // Human h;
    // h.eat();
    // cout<<endl;
    Vegetarian v;
    v.Animal::eat();
    v.Human::eat();
    v.eat();
    return 0;
}
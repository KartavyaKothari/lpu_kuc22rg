#include<bits/stdc++.h>
using namespace std;

class Animal{
    protected:
    void respire(){
        cout<<"Using oxygen to break glucose"<<endl;
    }
    void digest(){
        cout<<"Breaking down food to glucose"<<endl;
    }
};

class Koala : public Animal{
    public:
    void breathe(){
        cout<<"Take air in"<<endl;
        respire();
    }

    void eat(){
        cout<<"Eating eucalpytus leaves"<<endl;
        digest();
    }
};

int main(){
    Koala k;
    k.eat();
    k.breathe();
    return 0;
}
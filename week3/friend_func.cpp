#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int age;
    public:
    Person(string s, int a){
        name = s;
        age = a;
    }
    
    friend void backdoor(Person);
};

// void backdoor(Person);

void backdoor(Person p){
    cout<<"Hackerman results (DB): "<<endl<<p.name<<" "<<p.age;
}

int main(){
    Person p("Harsh",46);
    // p.name = "Kartavya";
    backdoor(p);
}
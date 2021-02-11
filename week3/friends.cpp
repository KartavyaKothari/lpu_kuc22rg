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
    
    friend class Government;
};

class Government{
    public:

    void diplay_details(Person p){
        cout<<"Hello to the government portal "<<p.name;
        cout<<" , our excellent hackers told us your age is "<<p.age;
    }
};

int main(){
    Person p("Harsh",46);
    Government g;
    // p.name = "Kartavya";
    g.diplay_details(p);
}
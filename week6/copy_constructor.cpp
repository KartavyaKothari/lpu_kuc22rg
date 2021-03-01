#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;
    string name;
    // default
    // copy
    // Person (){

    // }
    // Person(Person &p){
    //     name = p.name;
    //     age = p.age;
    // }
};

int main(){
    Person p;
    p.name = "Kartavya";
    p.age = 24;

    Person p2(p);
    cout<<p2.name<<" "<<p2.age<<endl;

    return 0;
}
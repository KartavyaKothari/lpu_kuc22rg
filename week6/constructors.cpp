#include <bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(){
        cout<<"Default constructor was called"<<endl;
        name = "Kartavya";
        age = 24;
    }
    Person(string name, int age){
        cout<<"Parametrized 1 constructor was called"<<endl;
        this->name = name;
        this->age = age;
    }
    Person(string name){
        cout<<"Parametrized 2 constructor was called"<<endl;
        this->name = name;
        this->age = 12;
    }
    Person(int is_male){
        cout<<"Parametrized 3 constructor was called"<<endl;
        cout<<(is_male?"Person is male":"Person is female")<<endl;
        name = "Kartavya";
        age = 24;

    }
};

int main(){
    Person p1;
    // Person *p = new Person();
    Person p2("Arun",27);
    Person p3("Depp");
    Person p4(1);

    return 0;
}
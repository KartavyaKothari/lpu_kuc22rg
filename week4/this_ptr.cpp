#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Person *p = new Person("Harsh",12);
    p->introduce();

    return 0;
}
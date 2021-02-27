#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        name= "Kartavya";
        age= 24;
    }

    Person(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Person p;

    Person *p_ptr = &p;
    p_ptr->introduce();

    Person *p_ptr2 = new Person("Harsh",12);
    p_ptr2->introduce();

    Person *p_ptr3 = new Person();
    p_ptr3->introduce();

    return 0;
}
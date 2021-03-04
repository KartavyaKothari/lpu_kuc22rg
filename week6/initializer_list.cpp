#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age):name(name),age(age){}
        // this->name = name;
        // this->age = age;
    // }
    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main() {
	Person p("Kartavya",24);
    p.introduce();
	return 0;
}
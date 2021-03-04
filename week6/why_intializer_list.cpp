#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    const string name;
    int &age;
    Person(string name, int &age):name(name),age(age){}
    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
    void birthday(){
        age++;
    }
};

int main() {
    int age = 24;
	Person p("Kartavya",age);
    p.introduce();
    cout<<age<<endl;
    p.birthday();
    cout<<age<<endl;
	return 0;
}
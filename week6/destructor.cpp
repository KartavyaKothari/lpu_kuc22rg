#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(){
        cout<<"Default constructor called"<<endl;
    }
    ~Person(){
        cout<<"Destructor is being called"<<endl;
    }
};

void foo(){
    cout<<"Function call started"<<endl;
    Person p;
    cout<<"Function call ended"<<endl;
}

int main() {
	// foo();
    Person p;
	return 0;
}
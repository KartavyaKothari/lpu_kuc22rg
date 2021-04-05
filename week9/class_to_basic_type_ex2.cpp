#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;
    int roll;
    double height;

    public:
    Student(string s, int a, int r, double h){
        name = s;
        age = a;
        roll = r;
        height = h;
    }

    operator string(){
        return name+" "+to_string(age)+" "+to_string(roll)+" "+to_string(height);
    }
};

int main(){
    Student s("Kartavya",24,21,6.3);

    string str = (string) s;
    // string str = s.operator string();
    cout<<str;

    return 0;
}
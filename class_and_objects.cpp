#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll_num;

    void displayRoll();
};

void Student:: displayRoll(){
    cout<<roll_num;
}

int main(){
    Student s;
    s.roll_num = 2;

    s.displayRoll();
}
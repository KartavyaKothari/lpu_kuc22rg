#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int phone_num;
    int age;
    int height;
    
    Student(int a, int b, int c, int d){
        roll = a;
        phone_num = b;
        age = c;
        height = d;
    }

    void display(){
        cout<<"H: "<<height<<" A: "<<age<<" R: "<<roll<<" P: "<<phone_num<<endl;
    }
};

bool comp_h(Student a, Student b){
    return a.height<b.height;
}

bool comp_a(Student a, Student b){
    return a.age>b.age;
}

int main(){
    vector<Student> arr;
    arr.push_back(Student(12,5656543,19,6));
    arr.push_back(Student(10,6656543,21,5));
    arr.push_back(Student(16,56543,13,2));
    arr.push_back(Student(9,556543,45,7));
    arr.push_back(Student(30,16543,15,3));

    sort(arr.begin(),arr.end(),comp_a);

    // for(Student s: arr){
    //     s.display();
    // }
    for(int i =  0; i < arr.size() ; i++){
        arr[i].display();
    }

    return 0;
}
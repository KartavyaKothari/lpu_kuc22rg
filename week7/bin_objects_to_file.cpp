#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
};

int main(){
    fstream my_f;
    my_f.open("detaidsdsdls.txt",ios::out|ios::binary);

    if(!my_f){cout<<"Some erorr";return 1;}
    
    struct Student deets[3] = {
        {"kartavya",24},
        {"Priyanshu",21},
        {"JAYASURYA",19}
    };

    for(int i = 0 ; i < 3 ; i++){
        // my_f<<deets[i].name<<" "<<deets[i].age<<endl;
        my_f.write((char *) &deets[i],sizeof(Student));
    }

    if(!my_f.good())return 1;

    my_f.close();
    my_f.open("detaidsdsdls.txt",ios::in|ios::binary);

    struct Student read_deets[3];

    for(int i = 0 ; i < 3 ; i++){
        my_f.read((char *) &read_deets[i],sizeof(Student));
    }

    for(int i = 0 ; i < 3 ; i++){
        cout<<read_deets[i].name<<" "<<read_deets[i].age<<endl;
    }

    my_f.close();

    return 0;
}
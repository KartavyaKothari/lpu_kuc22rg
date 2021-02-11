// An array stores details of 25 students (roll no, name, marks in three subject). Write a program to create such an array and print out a list of students who have failed in more than one subject.
#include<bits/stdc++.h>
using namespace std;

// student1: {1,"kartavya",{34,99,39}}
// passing marks = 40

int num_failed(int arr[3]){
    int cnt = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i]<40)cnt++;
    }

    return cnt;
}

struct StudentRecord{
    int roll;
    string name;
    int marks[3];
};

int main(){
    struct StudentRecord records[5] = {
        {1,"kartavya",{34,99,39}},
        {2,"Rishabh",{64,99,39}},
        {3,"Muskan",{43,9,33}},
        {4,"Hrithik",{1,1,1}},
        {5,"Simran",{99,99,99}}
    };

    for(int i = 0 ; i < 5 ; i++){
        if( num_failed(records[i].marks) > 1)
            cout<<"Roll #"<<records[i].roll<<","<<records[i].name+" has failed"<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Time{
    public:
    int hours;
    int min;

    void operator =(int m){
        hours = m/60;
        min = m%60;  
    }

    void display(){
        cout<<hours<<":"<<min<<endl;
    }
};

int main(){
    int time_in_mins = 200;

    // Time t(time_in_mins);
    Time t;
    t = time_in_mins;
    t.display();
    t = time_in_mins;

    return 0;
}
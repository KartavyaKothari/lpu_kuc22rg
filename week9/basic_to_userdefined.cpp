#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int min;

    public:
    Time(int m){
        hours = m/60;
        min = m%60;
    }

    void display(){
        cout<<hours<<":"<<min<<endl;
    }
};

int main(){
    int time_in_mins = 400;

    // Time t(time_in_mins);
    Time t = time_in_mins;
    t.display();

    return 0;
}
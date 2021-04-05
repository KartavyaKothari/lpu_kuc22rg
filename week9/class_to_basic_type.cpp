#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int mins;
    public:

    Time(int h, int m){
        hours = h;
        mins = m;
    }

    void display(){
        cout<<hours<<":"<<mins<<endl;
    }

    operator int(){
        return hours*60+mins;
    }
};

int main(){
    Time t(3,45);
    t.display();

    int time_in_mins = (int) t;
    cout<<t;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Car{
    protected:
    string speed;
    string color;

    public:
    void drive(){
        cout<<"vroom goes the car ...... "<<endl;
    }
};

class Tesla : public Car{
    int battery_level;
    public:
    Tesla(){
        battery_level=78;
        color = "red";
    }

    void view_battery(){
        cout<<"Baterry level is "<<battery_level<<endl;
    }    

    void print_color(){
        cout<<"My car color is "<<color;
    }
};

int main(){
    Tesla modelE;
    modelE.view_battery();
    modelE.drive();
    modelE.print_color();

    return 0;
}
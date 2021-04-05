#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int mts;
    int cms;

    Metric(){}

    void display(){
        cout<<kms<<" km, "<<mts<<" m and "<<cms<<" cm."<<endl;
    }
};

class Imperial{
    int miles;
    int feet;
    int inches;

    public:

    Imperial(int m, int f, int i){
        miles = m;
        feet = f;
        inches = i;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches."<<endl;
    }

    operator Metric(){
        Metric m;
        m.kms = miles/0.621371;
        m.mts = feet/3.28084;
        m.cms = inches/0.393701;

        return m;
    }
};

int main(){
    Imperial i(4, 2782, 33);
    i.display();

    Metric m;
    m = (Metric) i;
    m.display();

    return 0;
}
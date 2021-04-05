#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int mts;
    int cms;

    Metric(int k, int m, int c){
        kms = k;
        mts = m;
        cms = c;
    }

    void display(){
        cout<<kms<<" km, "<<mts<<" m and "<<cms<<" cm."<<endl;
    }
};

class Imperial{
    int miles;
    int feet;
    int inches;

    public:

    Imperial(Metric m){
        miles = m.kms*0.621371;
        feet = m.mts*3.28084;
        inches = m.cms*0.393701;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches."<<endl;
    }
};

int main(){
    Metric m( 8,848,86);
    m.display();

    // Imperial i(m);
    Imperial i = m;
    i.display();
    // 4 miles, 2782 feet and 33 inches.

    return 0;
}
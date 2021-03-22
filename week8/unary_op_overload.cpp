#include<bits/stdc++.h>
using namespace std;

class Temperature{
    int temp;
    public:
    Temperature():temp(0){}
    void operator ++(){
        temp+=4;
    }
    void operator --(){
        temp-=4;
    }

    void operator -(){
        temp= temp*-1;
    }

    void thermometer(){
        cout<<temp<<endl;
    }
};

int main(){
    Temperature t;
    t.thermometer();

    ++t;
    t.thermometer();

    --t;
    t.thermometer();

    ++t;
    ++t;
    -t;
    t.thermometer();

    return 0;
}
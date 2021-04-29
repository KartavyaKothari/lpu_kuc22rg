#include<bits/stdc++.h>
using namespace std;

template <class HARSH>
class Base{
    public:
    HARSH arr[3];
    
    Base(HARSH arr[]){
        this->arr[0] = arr[0];
        this->arr[1] = arr[1];
        this->arr[2] = arr[2];
    }

    HARSH add(){
        return arr[0]+arr[1]+arr[2];
    }
};

template <class MY_T>
class Derived: public Base<MY_T>{
    public:
    Derived(MY_T arr[]):
        Base<MY_T>(arr)
    {}
};

int main(){
    int arr[] = {1,2,3};
    string s_arr[] = {"This ","is ","clear"};
    Derived <string>d(s_arr);
    cout<<d.add()<<endl;

    return 0;
}
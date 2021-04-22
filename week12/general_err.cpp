#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string err;
    int code;
    A(int c, string s){
        code = c;
        err = s;
    }
};

int main(){
    double a,b;
    cin>>a>>b;

    try{
        if(a==0) throw A(404,"Some error");
        if(b==0) throw 12;
        if(a==1) throw 'x';
        if(b==1) throw A(504,"Some other error");

        int *arr = new int[(int)a*(int)a];
    }catch(...){
        cout<<"Some err"<<endl;
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}
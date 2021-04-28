#include<bits/stdc++.h>
using namespace std;

void A(){
    try{
        throw 21;
    }catch(int e){
        cout<<"A"<<endl;
        throw;
    }
}

void B(){
    try{
        A();
    }catch(int e){
        cout<<"B"<<endl;
        throw;
    }
}

void C(){
    try{
        B();
    }catch(int e){
        cout<<"C"<<endl;
    }
}

int main(){

    try{
        C();
    }catch(int e){
        cout<<"D"<<endl;
    }

    cout<<"@"<<endl;
    return 0;
}
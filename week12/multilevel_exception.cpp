#include<bits/stdc++.h>
using namespace std;

void div(double a, double b){
    if(b==0){
        string str = "Division by zero is not possible";
        throw str;
    }else{
        cout<<a/b<<endl;
    }
}

void func(double a, double b){
    try{
        div(a,b);
    }catch(int s){
        cout<<"It got handled, dont worry parent"<<endl;
    }
}

int main(){
    double a,b;
    cin>>a>>b;

    try{
       func(a,b); 
    }catch(string err){  
        cout<<err<<endl;
        cout<<"But here is your answer: INFINITY"<<endl;
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}
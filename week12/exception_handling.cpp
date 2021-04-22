#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;

    try{
        if(b==0){
            string str = "Division by zero is not possible";
            throw str;
        }else{
            cout<<a/b<<endl;
        }
    }catch(string err){  
        cout<<err<<endl;
        cout<<"But here is your answer: INFINITY"<<endl;
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}
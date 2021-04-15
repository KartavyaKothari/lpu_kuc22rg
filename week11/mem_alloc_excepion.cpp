#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;

    try{
        int *arr = new int[a];
    }catch(const bad_alloc &exp){
        cout<<exp.what()<<endl;
    }

    cout<<"Yay, I have a good memory"<<endl;

    return 0;
}
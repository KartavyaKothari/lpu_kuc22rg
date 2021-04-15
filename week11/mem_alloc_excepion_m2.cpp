#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;

    char *arr = new (std::nothrow) char[a];

    if(arr){
        cout<<"Yay, I have a good memory"<<endl;
    }else{
        cout<<"muua muaa"<<endl;
    }

    return 0;
}
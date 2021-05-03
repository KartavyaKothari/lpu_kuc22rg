#include<bits/stdc++.h>
// #include<list>
using namespace std;

int main(){
    list<int> lst = {80,21,39,10000,5};
    
    for(auto i = lst.begin() ; i!=lst.end() ; i++ ){
        cout<<*i<<" ";
    }

    cout<<endl;

    lst.sort();

    for(auto i = lst.begin() ; i!=lst.end() ; i++ ){
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;
}
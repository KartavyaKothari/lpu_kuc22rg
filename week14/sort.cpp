#include<bits/stdc++.h>
// #include<list>
using namespace std;

int main(){
    vector<int> lst = {80,21,39,10000,5};
    
    for(auto i = lst.begin() ; i!=lst.end() ; i++ ){
        cout<<*i<<" ";
    }

    cout<<endl;

    sort(lst.begin(),lst.end());

    for(auto i = lst.begin() ; i!=lst.end() ; i++ ){
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "koala";
    cout<<name<<endl;

    name.push_back('X');
    cout<<name<<endl;

    name.pop_back();
    cout<<name<<endl;

    name.pop_back();
    cout<<name<<endl;

    return 0;
}
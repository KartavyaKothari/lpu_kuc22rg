#include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "koala";
    cout<<name<<endl;

    cout<<name.size()<<endl;

    string str;
    cout<<str.size()<<" "<<str.capacity()<<endl;
    for(int i = 0 ; i < 1000 ; i++){
        str.push_back('a');
        cout<<str.size()<<" "<<str.capacity()<<endl;
        str.shrink_to_fit();
        getchar();
    }

    return 0;
}
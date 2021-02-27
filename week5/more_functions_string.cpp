#include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "koala";
    cout<<name<<endl;

    // for(int i = 0 ; i < name.size() ; i++){
    //     cout<<name[i]<<endl;
    // }

    // cout<<name.size()<<endl;
    // name.resize(2);
    // cout<<name<<"**"<<endl;
    // cout<<name.size()<<endl;

    string str;
    cout<<str.size()<<" "<<str.capacity()<<endl;
    for(int i = 0 ; i < 1000 ; i++){
        str.push_back('a');
        cout<<str.size()<<" "<<str.capacity()<<endl;
        str.shrink_to_fit();
        cout<<str.size()<<" "<<str.capacity()<<endl;
        getchar();
    }



    return 0;
}
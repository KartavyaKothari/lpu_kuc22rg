#include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "Kartavya";

    // for(int i = 0 ; i < name.size() ; i++){
    //     cout<<name[i]<<" ";
    // }

    string::iterator i = name.begin();
    // auto i = name.begin();
    // cout<<*(i+3)<<endl;
    for( i = name.begin() ; i != name.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for( i = name.end()-1 ; i != name.begin()-1 ; i--){
        cout<<*i<<" ";
    }
    cout<<endl;

    string::reverse_iterator r_i;

    for( r_i = name.rbegin() ; r_i != name.rend() ; r_i++){
        cout<<*r_i<<" ";
    }
    cout<<endl;
    // reverse(name.begin(),name.end());

    // cout<<name;
    return 0;
}
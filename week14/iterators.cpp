#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int>::iterator i;

    // list<int> lst;
    // list<int>::iterator i_l = lst.begin();
    for( i = arr.begin(); i != arr.end() ; i++){
        cout<<*(i)<<" "<<endl;
    }

    cout<<endl;

    vector<int>::reverse_iterator r_i;
    for(r_i = arr.rbegin() ; r_i != arr.rend() ; r_i++){
        cout<<*r_i<<endl;
    }

    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr.at(i)<<" ";
    // }
    // cout<<endl;

    return 0;
}
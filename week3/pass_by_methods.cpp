#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int x){
    x++;
}

void incre_by_reference(int &x){
    x++;
}

void incre_by_address(int *x){
    (*x)++;
}

int main(){
    int x = 1;
    
    incre_by_value(x);
    cout<<x<<endl;

    incre_by_reference(x);
    cout<<x<<endl;

    incre_by_address(&x);
    cout<<x<<endl;

    return 0;
}
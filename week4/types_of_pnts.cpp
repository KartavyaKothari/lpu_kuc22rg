#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;
    //uninitialised or wild pointer
    int *ptrs;


    // Null pointer
    ptrs = nullptr;
    // ptrs = NULL;
    ptrs = &var;

    // cout<<*ptrs;

    return 0;
}
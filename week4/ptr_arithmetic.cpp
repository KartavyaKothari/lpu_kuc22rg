#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int arr[5] = {100,200,300,400,500};

    int *ptr = arr;

    for(int i = 0 ; i < 5 ; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    cout<<endl;

    ptr = arr+4;

    for(int i = 0 ; i < 5 ; i++){
        cout<<*ptr<<endl;
        ptr--;
    }

    return 0;
}
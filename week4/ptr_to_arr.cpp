#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int arr[5] = {100,200,300,400,500};
    // char c_arr[6] = "abcde";
    char c_arr[5] = {'a','b','c','d','e'};

    // arr[i] == *(arr+i)
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr+i<<" "<<*(arr+i)<<endl;
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("%x",c_arr+i);
        cout<<" "<<*(c_arr+i)<<endl;
    }

    return 0;
}
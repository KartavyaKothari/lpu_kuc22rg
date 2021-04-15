#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a;
    // a = 10;

    // int arr[10];
    // arr[4] = 10;

    // int *a;
    // a = new int;

    int *arr;
    arr = new int[10];
    *(arr+4) = 10;

    cout<<*(arr+4);
    

    return 0;
}
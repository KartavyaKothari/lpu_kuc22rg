#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int arr[5] = {6000,500,300,400,600};

    if(arr>arr+4){
        cout<<"arr greater";
    }else if(arr==arr+4){
        cout<<"arr is equal";
    }else{
        cout<<"arr is low";
    }

    return 0;
}
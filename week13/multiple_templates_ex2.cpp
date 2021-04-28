#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
void print_sum(TYPE arr[], int size){
    TYPE sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum+=arr[i];
    }

    cout<<sum<<endl;
}

// void print_sum(int arr[], int size){
//     int sum = 0;
//     for(int i = 0 ; i < size ; i++){
//         sum+=arr[i];
//     }

//     cout<<sum<<endl;
// }

int main(){
    int SIZE = 7;
    // int arr[SIZE] = {1,2,3,4,5,6,7};
    double arr[SIZE] = {1.1,2.4,3.0,4,5.1,6.34,7.1234};
    print_sum(arr,SIZE);
    return 0;
}
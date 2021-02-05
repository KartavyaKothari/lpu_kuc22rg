#include<bits/stdc++.h>
using namespace std;


int main(){
    int num = 10;
    int num2 = 100;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;
    
    // cout<<num<<" "<<*num_ptr<<" "<<**num_ptr_ptr;
    
    num = 20;
    *num_ptr = 30;
    **num_ptr_ptr = 40;
    
    *num_ptr_ptr = &num2;
    **num_ptr_ptr = 200;
    
    cout<<num<<" "<<num2<<" "<<*num_ptr<<" "<<**num_ptr_ptr;

    return 0;
}
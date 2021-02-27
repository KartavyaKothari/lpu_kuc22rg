#include <iostream>
using namespace std;

int* func(){
    int var = 10;
    int *res = &var;
    
    return res;
}

int main() {
    
    // int *ptr;
    
    // for(int i = 0 ; i < 10 ; i++){
    //     ptr = &i;
    // }
    
    // cout<<*ptr;
    
	int *ptr = func();
	
	cout<<*ptr;
	return 0;
}
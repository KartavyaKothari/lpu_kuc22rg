#include<bits/stdc++.h>
using namespace std;

int sum(int,int);

void print_this(string str = "Nothing is passed"){
    cout<<str<<endl;
    return;
}

int main(){
    print_this();
    print_this("Sorry, I meant print Kartavya");
    return 0;
}

int sum(int a, int b){
    return a+b;
}
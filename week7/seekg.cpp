#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream my_f;
    my_f.open("my_file.txt", ios::out|ios::in|ios::trunc);

    if(!my_f){
        cout<<"Some error"<<endl;return 1;
    }

    my_f<<"Hello world";
    my_f.seekg(6,ios_base::beg);

    string A;
    my_f>>A;

    // char A[6];
    // f.read(A,5);
    // A[5] = '\0';

    cout<<A;
    // printf("%s",A);
    return 0;
}
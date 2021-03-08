#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream new_file;
    new_file.open("details.kartavya",ios::in|ios::out);

    string names[4];
    int ages[4];

    if(!new_file){
        cout<<"Some error happened"<<endl;
    }else{
        cout<<"File opened sucessfully"<<endl;
        
        for(int i = 0 ; i < 4 ; i++){
            new_file>>names[i]>>ages[i];
        }

        for(int i = 0 ; i < 4 ; i++){
            new_file<<names[i]<<(ages[i]>18?" is adult":" is not an adult")<<endl;
        }

        new_file.close();
    }

    return 0;
}
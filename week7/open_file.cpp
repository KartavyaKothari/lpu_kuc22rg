#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream new_file;
    new_file.open("details.kartavya",ios::out);

    string names[] = {"Kartavya","Priyanshu","Harsh"};
    int ages[] = {24,19,16};

    if(!new_file){
        cout<<"Some error happened"<<endl;
    }else{
        cout<<"File created sucessfully"<<endl;
        
        for(int i = 0 ; i < 3 ; i++){
            new_file<<names[i]<<" "<<ages[i]<<endl;
        }

        new_file.close();
    }

    return 0;
}
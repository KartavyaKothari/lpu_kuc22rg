#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int arr[10][10];
    Matrix(){
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                arr[i][j] = (i+1)*(j+1);
            }
        }
    }

    void display(){
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cout<<setw(3)<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    friend Matrix operator +(Matrix a, Matrix b);
    friend void operator ++(Matrix &a);
};

Matrix operator +(Matrix a, Matrix b){
    Matrix res;
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            res.arr[i][j] = a.arr[i][j]+b.arr[i][j];
        }
    }

    return res;
}

void operator ++(Matrix &a){
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            a.arr[i][j]++;
        }
    }
}

int main(){
    Matrix a;
    Matrix b;

    // a.display();
    // ++a;

    Matrix c = a+b;
    ++c;
    c.display();

    return 0;
}

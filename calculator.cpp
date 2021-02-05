#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:

    void sum_of_odd_num_in_range(int a, int b){
        int sum = 0;
        for(int i = a ; i<= b ; i++){
            if(i%2==1)sum = sum +i;
        }

        cout<<"Sum of all odd nums between "<<a<<" and "<<b<<" is "<<sum<<endl;
    }

    void fact(int num){
        int res = 1;
        for(int i = 1 ; i <= num ; i++)
            res = res*i;

        cout<<num<<"! = "<<res<<endl;
    }

    int fact_rec(int num){
        if(num==1 || num==0) return 1;
        return num*fact_rec(num-1);
    }
};

int main(){
    Calculator c;
    c.fact(10);
    cout<<c.fact_rec(10)<<endl;
    c.sum_of_odd_num_in_range(1,100);
}
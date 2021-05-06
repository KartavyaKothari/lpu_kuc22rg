#include<bits/stdc++.h>
using namespace std;

int sum_dig(int a){
    int n = a;
    int sum = 0;

    while(n>0){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

bool comp(int a, int b){
    return sum_dig(a)<sum_dig(b);  
}

int main(){
    vector<int> arr = {19,27,35,23,64,123,11111111};

    sort(arr.begin(),arr.end(),comp);

    for(int i =  0; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
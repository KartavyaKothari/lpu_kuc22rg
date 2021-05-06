#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

int main(){
    int arr[] = {5,22,6,444,7,1,45,33,446,23,1,34,4};
    sort(arr+1,arr+11);
    // sort(arr.begin(),arr.end());

    for(int i = 0 ; i < 13 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
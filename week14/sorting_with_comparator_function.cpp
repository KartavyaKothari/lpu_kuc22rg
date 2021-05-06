#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a<b;
}

// void bubble_sort(vector<int> &arr){
//     for(int i = 0 ; i < arr.size() ; i++){
//         for(int j = i+1 ; j < arr.size() ; j++){
//             if(!comp(arr[i],arr[j])){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    sort(arr,arr+9,comp);

    for(int i = 0 ; i < 9 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // vector<int> arr = {1,2,3,4,5,6,7,8,9};
    // bubble_sort(arr);

    // for(int i : arr){
    //     cout<<i<<" ";
    // }

    return 0;
}
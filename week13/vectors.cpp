#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

class A{
    public:
};

int main(){
    vector<A> arr_of_a;
    vector<int> arr(10);
    // vector<int> arr(10,42);

    cout<<arr.size()<<endl;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    cout<<arr.size()<<endl;
    
    display(arr);

    arr.pop_back();
    arr.pop_back();

    display(arr);

    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;


    vector<vector<int>> matrix = {{1,2},{3,4}};
    cout<<matrix[0][0];
}
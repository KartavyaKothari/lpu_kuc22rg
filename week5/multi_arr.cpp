#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr_1d[3] = {1,2,3};
    int arr_2d[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    // int arr_2d[3][2] = {1,2,3,4,5,6};

    int arr_3d[2][3][2] = {
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}} 
    };

    int arr_4d[3][2][3][2] = {
        {
            {{1,2},{3,4},{5,6}},
            {{7,8},{9,10},{11,12}} 
        },
        {
            {{1,2},{3,4},{5,6}},
            {{7,8},{9,10},{11,12}} 
        },
        {
            {{1,20},{3,4},{5,6}},
            {{7,8},{9,10},{11,12}} 
        }
    };

    // arr_4d[2][0][1][1] == *(*(*(*(arr_4d+2)+0)+1)+1)

    int arr_5d[2][3][2][3][2] = {
        {
            {
                {{1,2},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            },
            {
                {{1,2},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            },
            {
                {{1,20},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            }
        },
        {
            {
                {{1,2},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            },
            {
                {{1,2},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            },
            {
                {{1,20},{3,4},{5,6}},
                {{7,8},{9,10},{11,12}} 
            }
        }
    };

    return 0;
}
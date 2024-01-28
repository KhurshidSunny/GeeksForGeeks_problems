#include<bits/stdc++.h>

using namespace std;

int main() {
     /*
        4 1
        1
        2
        3
        4
    */
    int arr [5][3] = {
        // {4, 1},
        // {1},
        // {2},
        // {3},
        // {4}
        {1, 2, 3},
        {2, 3, 5},
        {3, 5, 0}
 
    };

    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(int);


   int valid = min(row_size, col_size);
  
    for(int i = 0; i < valid; i++) {
        // calculate the sum of elements in the ith row
        int row_sum = 0;
        for(int j = 0; j < col_size; j++) {
            row_sum += arr[i][j];
        } 

        // calculate the sum of the elements of column ith
        int col_sum = 0;
        for(int j = 0; j < row_size; j++) {
            col_sum += arr[j][i];
        }

        if(row_sum != col_sum) {
            cout<<"false"<<endl;
        }
       }
          
          cout<<"true"<<endl;
    }

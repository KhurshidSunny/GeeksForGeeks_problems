#include<bits/stdc++.h>

using namespace std;

int  main() {
    int matrix [3][5] = {
        {1,0,1,0,1},
        {0,1,0,1,0},
        {-1,-1,-1,-1,-1}
  
    };  

    int row_size = sizeof(matrix)/sizeof(matrix[0]);
    int col_size = sizeof(matrix[0])/sizeof(int);
 
    int sum = 0;
    
    for(int i = 0; i < row_size; i++) {
        for(int j = 0; j < col_size; j++) {
            sum += matrix[i][j];
        }
       
    }
    cout<<"sum of all the elements of the matrix is : "<<sum<<endl;
    
   
}
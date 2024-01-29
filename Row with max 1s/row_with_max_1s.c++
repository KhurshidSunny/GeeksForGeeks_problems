#include<bits/stdc++.h>

using namespace std;


int main() {
    int arr [2][2] = {
        // {0, 1, 1, 1},
        // {0, 0, 1, 1},
        // {1, 1, 1, 1},
        // {0, 0, 0, 0}

        {0, 0},
        {0, 0}
    };

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/sizeof(int);

    int row_number = -1;
    int max_ones = 0;

    for(int i = 0; i < n; i++) {
        int counter = 0;
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 1) {
                counter++;
            }
        }

        if(counter > max_ones) {
            max_ones = counter;
            row_number = i;
        }

    }

    cout<<row_number<<endl;
}
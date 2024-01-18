#include<bits/stdc++.h>

using namespace std;

int main() {
    // int arr [] = {2};
    // int arr [] = {2, 4, 3, 5, 6};
    // int arr [] = {1, 2, 1, 3, 6, 7};
    int arr [] = {1, 1, 1, 1, 1                                                    };
    // int arr [] = {8, 11, 5, 9, 15, 2, 12, 7};
    int first = INT_MAX;
    int second = INT_MAX;
    int size = sizeof(arr) / sizeof(arr[0]);

    if(size < 2) {
        cout<<"invalid input"<<endl;
    }
    else {

   
    for(int i = 0; i < size; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];

        }
        else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MAX) {
        cout<<"There is no second smallest element"<<endl;
    }
    else {
        cout<<"First smallest number is : "<<first<<endl;
    cout<<"Second smallest number is : "<<second<<endl;
    }
    
     }
}
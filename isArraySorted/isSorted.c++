#include<bits/stdc++.h>

using namespace std;

int main() {
    // int arr[] = {10, 20, 25, 19, 50};
    int arr[] = {2, 2, 2, 2, 2};
    int finder = arr[0];
    int count = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i <  n; i++) {
        if(finder <= arr[i]){
            finder = arr[i];
            count++;
        }
    
    }

    if(count == n) cout<<"sorted";
    else cout<<"not sorted";
}
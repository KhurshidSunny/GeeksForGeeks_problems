#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr [] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n-1; i++) {
        int count = n-i;
        for(int j = i; j < n; j++) {
            if(arr[i] >= arr[j]) {
                count--;
            }
        }
        if(count == 0){
            cout<<arr[i]<<" is leader in the array "<<endl;
        }
    }
    // the rightmost element is always the leader 
    cout<<arr[n-1]<<" is the leader in the array"<<endl;
}
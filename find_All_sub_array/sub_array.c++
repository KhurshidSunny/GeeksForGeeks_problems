#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr [] {2, 4, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++) {
                cout<<arr[k]<<" ";
            }
                cout<<endl;
        }
    
    }
}
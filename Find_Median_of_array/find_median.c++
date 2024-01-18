#include<bits/stdc++.h>

using namespace std;


int main() {
    // int arr [] = {2, 5, 6, 7, 9};
    int arr [] = {1, 3, 5, 8, 9, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    double ans;
    // for odd number of elements
    if(n%2 == 1) {
        ans = arr[n/2];
    }
    // Even number of elements
    else if(n%2 == 0){
        ans = (arr[n-1/2] + arr[n/2]) / 2;
    }

    cout<<"The median of the array is : "<<ans<<endl;
}
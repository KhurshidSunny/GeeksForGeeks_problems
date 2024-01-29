#include<bits/stdc++.h>

using namespace std;

bool is_increasing(vector<int>&vec) {
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] <= vec[i-1]) return false;
    }
    return true;
}

bool is_decreasing(vector<int>&vec) {
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] >= vec[i-1]) return false;
    }
        return true;
}

int main() {
    vector<vector<int>> arr = {
        // {1, 2, 3},
        // {6, 5, 4},
        // {7, 9, 8}

        // {1, 2, 3},
        // {4, 5, 6},
        // {6, 8, 9}
        // {2, 9},
        // {4, 5, 10, 4, 5, 7, 7, 5, 4},
        // {1, 9, 1, 10, 4, 2, 2, 3, 9}
        {1, 2, 3},
        {10 ,9, 6},
        {11, 17, 20},
        {8, 9, 2}
    };


    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(is_increasing(arr[i]) || is_decreasing(arr[i])) ans++;
    }

    cout<<"sorted rows are : "<<ans<<endl;

}
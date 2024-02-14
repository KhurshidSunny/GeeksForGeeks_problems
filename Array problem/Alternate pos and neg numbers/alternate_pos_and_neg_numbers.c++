#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = arr.size();
    
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;

    for(int i = 0; i<n; i++) {
        if(arr[i]>= 0) {
            pos.push_back(arr[i]);
        }
        else {
            neg.push_back(arr[i]);
        }
    }

    int i = 0, j = 0;
    while(i<pos.size() && j<neg.size()) {
        ans.push_back(pos[i]);
        ans.push_back(neg[j]);
        i++;
        j++;
    }

    while(i < pos.size()){
        ans.push_back(pos[i]);
        i++;
    }

       while(j < neg.size()){
        ans.push_back(neg[j]);
        j++;
    }
    

    for(int num : ans) {
        cout<<num<<" ";
    }
        



    
}
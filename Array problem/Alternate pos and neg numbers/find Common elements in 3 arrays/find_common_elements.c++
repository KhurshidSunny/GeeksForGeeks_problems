#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    int i=0, j=0, k=0;

    vector<int> ans;
    
    // for avoiding duplicatees 
    int last = INT_MIN;

    while(i<n1 && j<n2 && k<n3) {
        if(A[i] == B[j] && A[i] == C[k] && A[i] != last) {
            ans.push_back(A[i]);

            // update last the A[i]
            last = A[i];

            i++;
            j++;
            k++;
        }

        else if(min({A[i], B[j], C[k]}) == A[i]) i++;
        else if(min({A[i], B[j], C[k]}) == B[j]) j++;
        else k++;
    }

    for(int num : ans) {
        cout<<num<<" ";
    }
}
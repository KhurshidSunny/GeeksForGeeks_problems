#include<iostream>

using namespace std;

 int sumOfDigits(int N){
        int digit = 0;
        int sum = 0;

        while(N > 0) {
            digit = N % 10;
            sum += digit;

            N = N / 10;
        }
        return sum;
    };

int main() {

    cout<<sumOfDigits(516);

    return 0;
}
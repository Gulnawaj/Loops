#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    while(num > 9) {   // repeat until single digit
        int sum = 0;
        while(num > 0) {
            int rem = num % 10;
            sum += rem;
            num = num / 10;
        }

        num = sum;
    }

    cout << "Single digit sum is " << num;
}
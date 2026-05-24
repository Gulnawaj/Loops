#include<iostream>
using namespace std;

//Binary to Octal

int main() {
    int num;
    cout<<"Enter the number ";
    cin >> num;
    int original = num;
    int ans = 0;
    int mul = 1;

    // Binary to decimal (logic)
    while(num > 0) {
        int rem = num % 10;
        num = num / 10;
        ans  += rem * mul;
        mul *= 2;
    }

    // Decimal to octal (logic)
    int octal = 0;
    mul = 1;

    while(ans > 0) {
        int rem = ans % 8;
        ans = ans / 8;
        octal = rem * mul + octal;
        mul *= 10;
    }

    cout <<"Octal number of "<<original<<" is "<<octal;
}
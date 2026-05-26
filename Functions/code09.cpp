#include<iostream>
using namespace std;
//swap of two numbers using xor operation
int main(){
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;
}
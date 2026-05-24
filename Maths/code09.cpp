#include<iostream>
using namespace std;
 //Reverse Integer
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int ans = 0 , rem;
    while(num>0){
        rem = num%10;
        ans = ans*10+rem;
        num = num/10;
    }
    cout<<"reverse of the given number is "<<ans;
}


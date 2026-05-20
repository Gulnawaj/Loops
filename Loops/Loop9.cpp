#include <iostream>
using namespace std;

int main() {
    //factorial of the number using loops
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact = fact*i;
    }
    cout<<"factorial of "<<n<<" is..."<<fact;
}
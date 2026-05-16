#include <iostream>
using namespace std;

int main() {
    //sum of n natural number using loop
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum of the n natural number is..."<<sum;
}
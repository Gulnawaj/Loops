#include <iostream>
using namespace std;

int main() {
    //sum of squares of the natural number using loop
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum = sum+(i*i);
    }
    cout<<"sum of the sqaures of the  n natural number is..."<<sum;
}
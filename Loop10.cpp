#include <iostream>
using namespace std;

int main() {
    //checking prime number using loops
    int n ;
    cout<<"enter number"<<" ";
    cin>>n;
    if(n<2){
        cout<<"not a prime number";
        return 0;
    }
    if(n == 2){
        cout<<n<<" is a prime number";
    }
    else{
        for(int i=2 ; i<n;i++){
            if(n%i==0){
                cout<<n<<" is not a prime number";
                return 0;
            }
           
        }
        cout<<"it is prime number";
    }
    return 0;

}
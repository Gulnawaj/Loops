#include <iostream>
using namespace std;

int main() {
    int a , b ;
    cout<<"enter value of a"<<" ";
    cin>>a;
    cout<<"enter value of b"<<" ";
    cin>>b;
    int result = 1;

    for(int i = 1; i <= b; i++) {
        result = result * a;
    }

    cout << "Answer = " << result;

    return 0;
}


//we can get the same answer using pow() function 

// #include <iostream>
// #include <cmath>  

// using namespace std;

// int main() {

//     int a , b ;
//     cout<<"enter value of a"<<" ";
//     cin>>a;
//     cout<<"enter value of b"<<" ";
//     cin>>b;

//     int result = pow(a, b);
//     cout << "Answer = " << result;
//     return 0;
// }
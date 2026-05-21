#include<iostream>
using namespace std;

int main() {
    //use of continue statement 
    for(int i = 1; i <= 10; i++) {
        if(i == 6)
            continue;

        cout << i << " ";
    }
}
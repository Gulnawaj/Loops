#include<iostream>
using namespace std;
//check the number whether it is of power 2 or not 
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 1){
        cout<<"False";
        return 0;
    }

    while(num != 1){
        if(num % 2 == 1){
            cout<<"False";
            return 0;
        }

        num = num / 2;
    }

    cout<<"True";
    return 0;
}
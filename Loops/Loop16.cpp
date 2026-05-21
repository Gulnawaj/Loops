#include<iostream>
using namespace std;
int main(){
    //use of break statement 
    int i = 1;
    while(i<=10){
        if(i == 7){
            break;
        }
        cout<<i<<" ";
        i++;
    }
}
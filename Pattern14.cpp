#include<iostream>
using namespace std;
int main() {
    char name = 'a' ;
    for(name = 'a' ; name<='f';name++){
        for(char j='a';j<=name;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
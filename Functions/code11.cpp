#include<iostream>
using namespace std;
//small to capital letters
char convert(char name){
    char ans = name-'a'+'A';
    return ans ;
}

int main(){
    char name;
    cout<<"enter a small letter ";
    cin>>name; 
    char p = convert(name);
    cout<<"capital letter of "<<name<<" is "<<p;
}
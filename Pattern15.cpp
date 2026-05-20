#include<iostream>
using namespace std;

int main() {
    char end;

    cout << "Enter ending alphabet: ";
    cin >> end;

    for(char name = 'a'; name <= end; name++) {
        for(char j = 'a'; j <= name; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;
//missing number in the array using XOR

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter elements: ";
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int xor1 = 0;
    // XOR from 1 to n
    for(int i = 1; i <= n; i++) { 
        xor1 ^= i;     //example- 1^2^3^4^5 (if n = 5)
    }

    int xor2 = 0;
    // XOR of present elements in the given
    for(int i = 0; i < arr.size(); i++) {
        xor2 ^= arr[i]; //example- 1^2^4^5 
    }

    int missing = xor1 ^ xor2;
    cout << "Missing number is: " << missing;

    return 0;
}
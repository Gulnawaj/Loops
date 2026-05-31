#include<iostream>
#include<vector>
using namespace std;
//missing number in an array
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter elements: ";
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int expectedSum = n * (n + 1) / 2; //sum of n-natural numbers
    
    int actualSum = 0;                 //sum of the array elements
    for(int i = 0; i < arr.size(); i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number is: " << missing;

    return 0;
}
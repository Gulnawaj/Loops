#include<iostream>
#include<vector>
using namespace std;
// Function to rotate array by 1 

void rotateArray(vector<int>& arr) {
    int n = arr.size();
    int temp = arr[n - 1];
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}


int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr);
    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
//if array is rotated by k times 

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;    
    while(k--) {
        int temp = arr[n-1];
        for(int i = n-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
}

int main() {
    int n;
    cout<<"total elements ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter rotations: ";
    cin >> k;

    rotateArray(arr, k);
    for(int x : arr) {
        cout << x << " ";
    }
}
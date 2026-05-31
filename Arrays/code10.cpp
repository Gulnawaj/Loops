#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//second max in the array
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = INT_MIN;  //largest element 
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout<<"largest element in the array "<<maxi<<endl;


    int secondMax = INT_MIN; //second largest element
    for(int i = 0; i < n; i++) {
        if(arr[i] > secondMax && arr[i] != maxi) {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN) {
        cout << "Second largest element does not exist";
    }
    else {
        cout << "Second largest element is: " << secondMax;
    }

    return 0;
}
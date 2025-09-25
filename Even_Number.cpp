#include<iostream>
using namespace std;

void Even(int arr[], int size, int index) {
    // base case 
    if(index >= size) {
        return;
    }

    // 1 case solve karunga 
    if((arr[index] & 1) == 0) {
        cout << arr[index] << " ";
    }

    // recursion call 
    Even(arr, size, index + 1);
}

int main() {
    int arr[5] = {4, 6, 2, 8, 10};
    int size = 5;
    int index = 0;

    cout << "Even numbers are: ";
    Even(arr, size, index);
    cout << endl;

    return 0;
}

#include<iostream>
#include<limits.h>
using namespace std;

void getminimumElement(int arr[], int size, int &mini, int index) {
    // base case 
    if(index >= size) {
        return;
    }
    // 1 case solve karlo
    mini = min(mini, arr[index]);
    // recursion call 
    getminimumElement(arr, size, mini, index + 1);
}

int main() {
    int arr[5] = {10, 20, 30, 50, 2};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;

    getminimumElement(arr, size, mini, index);

    cout << "Minimum: " << mini << endl;
    return 0;
}

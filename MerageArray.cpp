#include<iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid) {
    int LeftArrayLength = mid - s + 1;
    int RightArrayLength = e - mid;

    int* arr1 = new int[LeftArrayLength];
    int* arr2 = new int[RightArrayLength];

    int mainArrayIndex = s;
    for(int i = 0; i < LeftArrayLength; i++) {
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < RightArrayLength; i++) {
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    int i = 0;
    int j = 0;
    mainArrayIndex = s;

    while(i < LeftArrayLength && j < RightArrayLength) {
        if(arr1[i] < arr2[j]) {
            arr[mainArrayIndex] = arr1[i];
            i++;
        } else {
            arr[mainArrayIndex] = arr2[j];
            j++;
        }
        mainArrayIndex++;
    }

    // Copy remaining elements
    while(i < LeftArrayLength) {
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex++;
    }

    while(j < RightArrayLength) {
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
    }

    delete[] arr1;
    delete[] arr2;
}

void mergesort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }

    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main() {
    int arr[] = {7, 2, 4, 3, 1, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    mergesort(arr, s, e);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

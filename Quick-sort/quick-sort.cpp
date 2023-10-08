#include<bits/stdc++.h>
using namespace std;

const int n = 5;
int arr[n];

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap1(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

void swap2(int &x, int &y) {
    x = x * y;
    y = x / y;
    x = x / y;
}

void swap3(int &x, int &y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

void quicksort(int arr[], int first, int last) {
    if (first < last) {
        int pivot = first;
        int i = first;
        int j = last;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last) 
                i++;
            while (arr[j] > arr[pivot]) 
                j--;
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[pivot], arr[j]);
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}

int main() {
    cout << "Enter 5 values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
